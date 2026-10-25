#include<stdio.h>
int main()
{  
   float a,w,d,c;
   int choice;
   printf("The current account balance:");
   scanf("%f",&a);
   //customer's choice 1 for balance inquiry,2 for cash withdrawal,3 for cash deposit 
   printf("Enter the choice:");
   scanf("%d",&choice);
   switch(choice){
   case 1:
      printf("\nThe current balance is %.2f",a);
      break;
   case 2:
      printf("\nThe withdrawal amount:");   
      scanf("%f",&w);
      if(w<=a)
        printf("\nTransaction successful and remaining balance is %.2f",c=a-w);
      else
        printf("\nInsufficient balance");  
      break;
   case 3:
      printf("\nThe deposit amount:");   
      scanf("%f",&d);  
      printf("\nDeposit successful and updated balance is %.2f",c=a+d);
      break;
    default:
      printf("\nInvalid option");  }
      return 0;
 }        
        