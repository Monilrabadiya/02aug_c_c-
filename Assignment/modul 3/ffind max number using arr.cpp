#include <stdio.h>

int main()
{
int i,m;
int a[15];
for(i=0;i<10;i++)
{
    printf("enter the number = ");
    scanf("%d",&a[i]);
}
m=a[0];
for(i=0;i<10;i++)
{
    if(a[i]>m)
    {
        m=a[i];
    }
}
printf("max number is=%d\n\n",m);
    return 0;
}

