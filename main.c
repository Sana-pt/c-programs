/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int gcd(int n1,int n2);

int main()
{
   int n1,n2;
   printf("Enter two positive numbers:");
   scanf("%d %d",&n1,&n2);
   printf("G.C.D of %d and %d is %d.",n1,n2,gcd(n1,n2));

    return 0;
}
int gcd(int n1,int n2)
{
    int temp;
    if (n1<n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
        return gcd(n2,n1%n2);
    }
    else
    {
        if(n2!=0)
       return gcd(n2,n1%n2);
       else
       return n1;
    }
    
}