#include <stdio.h>

int main()
{
  int i,j,k,m=1;
  for(i=4;i>=1;i--)
  {
      for(j=4;j>i;j--)
      {
          printf(" ");
      }
      for(k=1;k<=i;k++)
      {
          printf("*",m);
      }m++;
  printf("\n");
  }
  
    return 0;                                                                       
}

