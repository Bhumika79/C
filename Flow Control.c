@Switch-case-statement
#include <stdio.h>

int main(){
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


@If-else-statement
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if (num%2==0){
       printf("Number is even...");
    }
   else{
      printf("Numer is odd...");
   }
   return 0;
}

 C-while-loop
   int num;
   printf("Enter max limit:");
   scanf("%d", &num);
   while(num<=100){
      printf("%d\n", num);
      num=num+1;
   }

    return 0;
}


@Continue-statement
#include <stdio.h>
int main()
{
   int n;
   printf("Enter max limit:");
   scanf("%d", &n);
   for(n>0; n--;)
   {
      if(n==5){
         continue;
      }
      printf("%d\n", n);
   }
   return 0;
}


@C-for-loop-statement
#include <stdio.h>
int main(){
   int num;
   printf("Enter the number:");
   scanf("%d", &num);
   for(num; num<=100; num=num+1){
      printf("%d\n", num);
   }
   return 0;
 }

@Break Statement
int main()
{
   int i;
   double num, multiple=1;
   for(i=1;i<=5;++i)
   {
      printf("Enter the num%d: ",i);
      scanf("%lf", &num);
   if(num<0.0){
      break;
   }
   multiple=multiple*num;
   }
   printf("Multiple is %lf", multiple);
   return 0;
}
