#include<stdio.h>
int main()
{  
   float a,w,d,c;//a is current account balance,w is withdrawal amount,d is deposit amount
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
         c=a-w;
        printf("\nTransaction successful and remaining balance is %.2f",c);
      else
        printf("\nInsufficient balance");  
      break;
   case 3:
      printf("\nThe deposit amount:");   
      scanf("%f",&d);  
      c=a+d;
      printf("\nDeposit successful and updated balance is %.2f",c);
      break;
    default:
      printf("\nInvalid option");  }
      return 0;
 }        
        
