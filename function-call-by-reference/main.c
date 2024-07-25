/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void change(int* num)
{
    printf("Before adding value inside function num=%d\n",*num);
    (*num)+=100;
    printf("After adding value inside function num=%d\n",*num);
    
}

int main()
{
  int x=100;
  printf("Before function call x=%d\n",x);
  change(&x);//passing reference in function
  printf("After function call x=%d\n",x);
  return 0;
}