/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int a;
  printf("enter any year");
  scanf("%d",&a);
  if( a%4==0){
      printf("leap year");
  }
  else{
      printf("not leap year");
      
  }
    return 0;
}
