/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,a=1,n=6;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",a);
            a++;
        }
        a=a-i;
        printf("\n");
    }

    return 0;
}