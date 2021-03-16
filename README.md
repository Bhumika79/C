# C
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
