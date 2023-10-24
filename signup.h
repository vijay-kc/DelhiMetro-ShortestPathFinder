#include<stdio.h>
#include<stdlib.h>
void signup(){
    char username;
    int userpassword;
    // signup page
    printf("\t\t\t\t\t\tSING-UP\n");
    printf("ENTER YOUR NAME:");
    scanf(" % c\n",&username);
    print("ENTER YOUR PASSWORD(must be integer):");
    scanf("%d\n",&userpassword);
      add_user(username,userpassword);
    printf("THANKS FOR SING-UP THIS APPLICATION");
};