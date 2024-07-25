/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

void quadratic(float a,float b,float c,float d)
{
    float r1,r2,img;
    if(d>0)
    {
        r1=(-1*b+sqrt(d))/(2*a);
         r2=(-1*b-sqrt(d))/(2*a);
         printf("Roots are:%.0f and %.0f",r1,r2);
    }
    else if(d==0)
    {
        r1=(-1*b)/(2*a);
        printf("\nOnly one root %.0f",r1);
        
    }
    else
    {
        r1=-1*b/(2*a);
        img=sqrt(-1*d)/(2*a);
        printf("Roots are %.0f +%.0fi and %.0f -%.0fi",r1,img,r1,img);
    }
}
    int main()
        {
         float a,b,c,d; 
         printf("Enter the coefficients of quadratic equation:\n");
         scanf("%f %f %f",&a,&b,&c);
         d=b*b-4*a*c;
           quadratic(a, b, c, d);
          return 0;
        }
        
   
