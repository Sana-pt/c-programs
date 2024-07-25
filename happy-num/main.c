/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n,x,sum,rem;
   printf("Enter a number:");
   scanf("%d",&n);
   x=n;
   while(x>=10)
   {
    sum=0;
    while(x>0)
    {
        rem=x%10;
        sum+=rem*rem;
        x/=10;
    }
    x=sum;
   }
   if(sum==1)
   {
       printf("%d is a happy number\n",n);
   }
   else
   {
       printf("%d is not a happy number\n",n);
   }
return 0;
   
}