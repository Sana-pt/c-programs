/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,n=8;
    for(i=0;i<n;i++)
    {
        if(i==0||i==n-1)
        {
            for(j=0;j<n;j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(j==0||j==n-1){
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