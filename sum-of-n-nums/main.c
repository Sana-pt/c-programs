/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum=0,limit=0,i=0;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
     sum=sum+i;   
    }

        printf("sum of the firts %d natural number is %d",limit,sum);
        return 0;

}
