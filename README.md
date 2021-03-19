# C
Flow-Control
Continue-statement
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


Flow-Control
C-for-loop-statement
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
   
Break Statement
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

