# C
#include <stdio.h>

int main()
{
   int num;
   printf("Enter max limit:");
   scanf("%d", &num);
   while(num<=100){
      printf("%d\n", num);
      num=num+1;
   }

    return 0;
}
