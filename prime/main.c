/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void prime();
void main()
{
    int n;
    printf("Enter the number to check whether it is prime: ");
    scanf("%d",&n);
    prime(n);
}

void prime(int n)
{
    int i,count;
    if(n==1)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        for(i=2;i<n/2;i++)
        {
            count=0;
            if(n%i==0)
            {
                printf("%d is not a prime number",n);
                count=1;
                break;
            }
        }
        if(count==0){
            printf("%d is a prime number",n);
        }
    }
    
}