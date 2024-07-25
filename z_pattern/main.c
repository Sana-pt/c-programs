/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            for(j=1;j<=n;j++)
            {
                printf("* ");
            }
        }
        else{
            for(j=0;j<=n;j++)
            {
                if(j==n-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}