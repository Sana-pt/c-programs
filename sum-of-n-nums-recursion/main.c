/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int n)
{
   if(n==0)
   {
       return 0;
   }
   else
   {
       return n+sum(n-1);
   }

    
  
}

int main()
{
    int n,a=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    a=sum(n);
    printf("%d",a);
  

}
