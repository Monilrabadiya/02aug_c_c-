/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a[5][5],c[5][5];
int i,j;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("enter valu%de",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    { 
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("enter value%d",i,j);
        scanf("%d",&c[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    { 
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
printf("\n sum of two matrix\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf(" %d ",a[i][j]+c[i][j]);
    }
    printf("\n");
}
return 0;
}
