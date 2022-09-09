/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int i,j,n=1;
  for(i=1;i<=4;i++)
  {
      for(j=1;j<=i;++j)
      {
          printf("%d ",n);
          ++n;
      }
      printf("\n");
  }
  return 0;
}
