# C
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

