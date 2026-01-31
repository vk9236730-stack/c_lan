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

//Find a Tribonacci Series program
#include <stdio.h>
// 0 1 2 3 6 11 20....n
int main() {
   int n,a=0,b=1,c=2,d;
   printf("Enter any number:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       printf("%d",a);
       d=a+b+c;
       a=b;
       b=c;
       c=d;
   }
  return 0;
}

//find a number is even and odd
#include <stdio.h>
int main() {
   int n;
   printf("Enter any number:");
   scanf("%d",&n);
   if(n%2==0){
       printf("Even Number");
   }
   else{
        printf("odd Number");
       }
  return 0;
}

//find a number is prime or not prime
#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter any number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
            printf("Number is prime");
    }
    else{
            printf("Number is not prime");
        }
        return 0;
 }