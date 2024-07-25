/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void change(int num)
{
    printf("Before adding value inside function num=%d\n",num);
    num=num+100;
    printf("After adding value inside function num=%d\n",num);
    
}

int main()
{
  int x=100;
  printf("Before function call x=%d\n",x);
  change(x);//passing value in function
  printf("After function call x=%d\n",x);
  return 0;
}