/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("leap year");
            }
            else
            {
                printf("Not a leapyear");
                
            }
        }
    else
    {
      printf("leap year");  
    }
    }
else
  {
    printf("Not a leap year");
  }
  return 0;
}