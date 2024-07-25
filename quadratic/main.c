/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,img,d,r1,r2;
    printf("Enter the coefficients of quadratic equation:\n");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-1*b+sqrt(d))/(2*a);
         r2=(-b-sqrt(d))/(2*a);
         printf("Roots are:%.2f and %.2f",r1,r2);
    }
    else if(d==0)
    {
        r1=(-1*b)/(2*a);
        printf("\nOnly one root %.2f",r1);
        
    }
    else
    {
        r1=-1*b/(2*a);
        img=sqrt(-1*d)/(2*a);
        printf("Roots are %.2f +%.2fi and %.2f -%.2fi",r1,img,r1,img);
    }
    return 0;
}