# C
#include <stdio.h>

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
