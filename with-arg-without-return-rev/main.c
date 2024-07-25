/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void rev(int); 
void main()
{
  int num;
  printf("Enter two numbers:");
  scanf("%d",&num);
  rev(num);
}

void rev(int num)

   {
       int rem,a;
       while(num!=0)
     {
       rem=num%10;
       a=num/10;
       printf("%d",rem);
       num=a;
     }
   }
