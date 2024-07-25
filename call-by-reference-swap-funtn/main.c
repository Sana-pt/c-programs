/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a=10;
    int b=20;
    printf("Before swapping the values in main a=%d,b=%d\n",a,b);
    swap(&a,&b);
    printf("After swapping the values in main a=%d,b=%d\n",a,b);
}
void swap(int*a,int*b)
{
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
 printf("After swapping values in function a=%d,b=%d\n",*a,*b);
}
