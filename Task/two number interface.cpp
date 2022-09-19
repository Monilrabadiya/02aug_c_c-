/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int f,l,i,j,m,temp;
 printf("enter the frist int number =");
 scanf("%d",&f);
 printf("\n enter the last int  number=");
 scanf("%d",&l);
 printf("\nprime number is \n");
 for(i=f;i<=l;i++)
 {
     m=0;
     for(j=2;j<100;j++)
     {
         if(i%j ==0)
         m=m+1;
     }
     if(m==0);
     printf("\n %d",i);
     
 }
    return 0;
}
