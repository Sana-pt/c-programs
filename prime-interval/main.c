/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void primeInterval(int,int);
void main()
{
    int start,end;
    printf("Enter the first interval: ");
    scanf("%d",&start);
    printf("Enter the second interval: ");
    scanf("%d",&end);
    primeInterval(start,end);
}

void primeInterval(int start,int end)
{
    int i,j,count;
    for(i=start;i<=end;i++)
    {
        count=0;
        for(j=2;j<=i/2;j++)
        {
           if(i%j==0)
           {
                count=1;
                break;
           }
        }
        if(count==0&&i!=1)
        {
            printf("%d ",i);
        }
    }
}