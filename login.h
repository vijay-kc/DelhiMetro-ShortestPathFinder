#include<stdio.h>
#include<stdlib.h>
#include "userdata.h"
int login(){
    char username;
    int userpassword;
    // login page
    printf("\t\t\t\t\t\tLOGIN\n");
    printf("ENTER YOUR NAME:");
    scanf(" % c\n",&username);
    printf("ENTER YOUR PASSWORD(must be integer):");
    scanf("%d\n",&userpassword);
    int x= verify(start, username,userpassword);
    switch (x)
    {
    case 0:
        printf("INVALID INPUT");
        break;
    
    case 1:
        return 1;
        break;
    }

}
