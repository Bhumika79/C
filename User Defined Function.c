#include <stdio.h>
void add();
int main(){
   add();
}
void add()
{
   float a, b, c;
   printf("Enter 1st number:");
   scanf("%f", &a);
   printf("\nEnter 2nd number:");
   scanf("%f", &b);
   c= a+b;
   printf("\nThe result is...%f", c);
}
