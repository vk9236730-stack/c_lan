  Basic Programs

  //Find the sum of two numbers
#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum= %d",sum);
    return 0;
 }

 //Find a number is positive or negative
 #include <stdio.h>
int main(){
    int n;
    printf("Enter two number: ");
    scanf("%d",&n);
    if(n>0){
        printf("Positive number");
    }
    else{
        printf("Negative number");
    }
    return 0;
 }

  //Find a Fibonacci Series program
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

//Find a Fibonacci Series program
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

//Simple Calculator
 #include <stdio.h>
 int main() {
    int a,b,c;
    char ch;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter mathmatical operation: ");
    scanf(" %c",&ch);
    printf("Enter Second number: ");
    scanf("%d",&b);
    switch(ch){
        case '+': c=a+b;
        printf("Addition= %d",c);
        break;
        case '-': c=a-b;
        printf("Subtraction= %d",c);
        break;
        case '*': c=a*b;
        printf("Multification= %d",c);
        break;
        case '/': c=a/b;
        printf("Division= %d",c);
        break;
        case '%': c=a%b;
        printf("Modular= %d",c);
        break;
        case 6: 
        printf("Invalid operation:");
        break;
    }
    return 0;
}

//Swapping of two numbers
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    printf("Before Swapping:\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping:\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}

//Find a largest number among three numbers
#include <stdio.h>
int main() {
   int a,b,c,max;
   printf("Enter Three numbers: ");
   scanf("%d %d %d",&a,&b,&c);
   max= (a>b)? (a>c?a:c) : (b>c?b:c);
   printf("\n%d",max);
   return 0;
}