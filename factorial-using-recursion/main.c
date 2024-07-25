/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int number;
    printf("Enter a positive integer:");
    scanf("%d",&number);
    if(number<0){
        printf("factorial is not defined for negative numbers");
    }
    else{
        printf("factorial of %d is:%d\n",number,factorial(number));
    }
    return 0;
}