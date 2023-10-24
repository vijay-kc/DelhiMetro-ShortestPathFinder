#include<stdio.h>
#include<stdlib.h>
#include "login.h"
#include "signup.h"
#include "userdata.h"

int main(){
  // taking input for perform operation
  printf("\n\t\t\t\t\t\tWELCOME TO DELHI METRO\n\n"); 
  printf("\t\t\t\tChoose operation to perform:\n");
  printf("\t\t\t\t1:register user\n");
  printf("\t\t\t\t2:login user\n");
  printf("\t\t\t\t3:find station\n");
  printf("\t\t\t\t4:find shortest path\n");
  printf("\t\t\t\t5:exit\n");
  int op,out=0;
  scanf("%d",&op);
  //performing operation
  switch(op){
    case 1:
      signup();
    case 2:
      out=login();
    case 3:
      find();
    case 4:
      shortest_path();
    case 5:
      printf("THANKS FOR USING THIS APPLICATION");
      return 0;
    default:
      printf("wrong option");
  }
     if(out=1){

     }
  return 0;
  };
