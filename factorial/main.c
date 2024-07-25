/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int fact=1,i,n;
   printf("Enter a number: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
    fact=fact*i;
    printf("%d",fact);
   
   return 0;
}