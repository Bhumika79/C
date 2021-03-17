# C
#include <stdio.h>

int main()
{
   int num1, num2, choice,s;
   printf("\n Menu");
   printf("\n 1. Addition");
   printf("\n 2. Subraction");
   printf("\n 3. Multiplication");
   printf("\n 4. Division");
   printf("\n Enter Your Choice:");
   scanf("%d", &choice);
   if(choice<5 && choice>0)
   {
      printf("Enter 1st number:");
      scanf("\n%d", &num1);
      printf("Enter 2nd number:");
      scanf("\n%d", &num2);
   }
   switch(choice)
   {
      case 1:
      s= num1+num2;
      printf("\n Addition: %d", s);
      break;
      
      case 2:
      s= num1-num2;
      printf("\n Subtraction: %d", s);
      break;
      
      case 3:
      s= num1*num2;
      printf("\n Multiplication: %d", s);
      break;
      
      case 4:
      s= num1/num2;
      printf("\n Division: %d", s);
      break;
      
      default:
      printf("Invalid choice");
      break;
      
   }
   return 0;
   
}
