/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  
  int i,num,x,sum,demo;
  for(i=1;i<=1000;i++)
  {
     sum=0;
     num=i; 
     demo=num;
     while(num>0)
     {
         x=num%10;
         num=num/10;
         sum=sum+x*x*x;
     }
       if(sum==demo)
       {
           printf("%d\n",i);
        
       }
    
  }
   return 0;
}
