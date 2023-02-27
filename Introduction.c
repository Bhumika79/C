/*C-operators:-*/
#include<stdio.h>
int main(){
 int num1, num2, sum, pro;
 printf("Enter first number");
 scanf("%d", &num1);
 printf("Enter second number");
 scanf("%d", &num2);
 printf("The sum is...");
 sum=num1+num2;
 printf("%d", sum);
 printf("The product is...");
 pro=num1*num2;
 printf("%d", pro);
 return 0;
}
/*Function-of-scanf/printf:-*/
#include<stdio.h>
int main()
{
 int num;
 printf("Enter the value of num...");
 scanf("%d", &num);
 printf("%d", num);
  return 0;
}
