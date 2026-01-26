//find a fibonacci series program
#include <stdio.h>

int main() {
   // 0 1 1 2 3 5 8......n
   int n,a=0,b=1,c;
   printf("Enter any number:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       printf("%d",a);
       c=a+b;
       a=b;
       b=c;
   }
  return 0;
}