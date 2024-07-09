/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
     printf("%d is larger",a);
    }
    if(b>a && b>c)
    {
        printf("%d is larger",b);
    }
    if(c>a && c>b)
    {
        printf("%d is larger",c);
    }
    if(a==b && a==c)
    {
        printf("All are equal");
    }

    return 0;
}