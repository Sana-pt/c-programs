/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,a,n=7,m;
    m=n/2;
    for(i=0;i<m;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<(m-i)*2;k++)
        {
            printf(" ");
            
        }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(j=0;j<n;j++)
    {
        printf("*");
    }
    printf("\n");
    for(a=0;a<m;a++)
    {
        for(j=0;j<m-a;j++)
        {
            printf("*");
        }
        for(k=0;k<=a*2;k++)
        {
            printf(" ");
}
        for(j=0;j<m-a;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
 return 0;
}