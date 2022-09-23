#include <stdio.h>
long int fecto(long int no)
{
    if(no<1)
    return 1;
    return no*fecto( no-1);
}


int main()
{
  int no;
  printf("rnter the number");
  scanf("%d",&no);
  printf("%ld",fecto(no));
    return 0;
}

