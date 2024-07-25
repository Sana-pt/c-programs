/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int num,rem,sum=0,temp;
  printf("Enter a number:\n");
  scanf("%d",&num);
  temp=num;
  while(num)
  {
  rem=num%10;
  sum=sum+(rem*rem*rem);
  num=num/10;
  }
  if(temp==sum)
  {
    printf("%d is armstrong number\n",temp); 
  }
  
  else
  {
      printf("%d is not armstrong number\n",temp); 
  }



return 0;    
}
