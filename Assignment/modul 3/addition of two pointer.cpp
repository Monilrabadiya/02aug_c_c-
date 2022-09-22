/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int *p,*q,a,b;
printf("enter the 1 number=");
scanf("%d",&a);
printf("enter the 2 number=");
scanf("%d",&b);
p=&a;
q=&b;
int sum=*p+*q;
printf("addition of two pointer  is = %d",sum);

    return 0;
}
