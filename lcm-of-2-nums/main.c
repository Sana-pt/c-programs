/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    int i,fact;
    for(i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            fact=i;
        }
    }
    int lcm;
    lcm=(n1*n2)/fact;
    printf("lcm of %d and %d is %d",n1,n2,lcm);
    
    return 0;
}