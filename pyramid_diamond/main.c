/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,k,n=5;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
        printf(" ");
    }
    for(k=0;k<=i;k++)
    {
        printf("* ");
    }

    printf("\n");
}
   for(i=0;i<n;i++)
    {
        for(j=0;j<=i+1;j++)
    {
        printf(" ");
    }
    for(k=1;k<n-i;k++)
    {
        printf("* ");
    } 
     printf("\n");
}
 return 0;
}
