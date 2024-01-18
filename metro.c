#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"
#include "working.h"


int main(){
    //  displayUsers(userList);
greetings();
    do{
        printf("\n\t\t#--------- SELECT AN OPTION FROM LOGIN PAGE --------#\n");
        printf("\n\t\t1: REGISTER USER\n");
        printf("\t\t2: LOGIN USER\n");
        printf("\t\t3: CONTINUE AS GUEST\n");
        printf("\t\t4: EXIT\n");

        printf("\n\t\tENTER CHOICE : ");
        scanf("%d",&dec);
        switch (dec)
        {
        case 1:
            printf("\n\t\t#-------    FOR REGISTER NEW USER    -------#\n");
            registerUser(&userList, filename);
        case 2:
            printf("\n\t\t#-------    FOR LOGIN EXISTING USER    -------#\n");
            printf("\n\t\tENTER USERNAME : ");
            scanf("%s", username);
            printf("\t\tENTER PASSWORD : ");
            scanf("%s", password);

            if (loginUser(userList, username, password)) {
                printf("\n\t\t!! LOGIN SUCCESSFUL... !!\n");
            } else {
                printf("\t\t!! LOGIN FAILED. INVALID USERNAME OR PASSWORD !!\n");
            break;
            }
        case 3:
            main_menu();
        break;
        case 4:
            printf("\n\t\tExiting...\n\n");
            on_exit();
            exit(1);

        break;
        default:
            break;
        }
        printf("\n\t\t!! DO YOU WISH TO GO LOGIN PAGE (y/n)!!");
        scanf("%s", &choice);
    }while(choice=='y'||choice=='Y');
    displayUsers(userList);
    on_exit();
}