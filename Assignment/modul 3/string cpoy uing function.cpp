#include <stdio.h>
#include<string.h>
void copy()
{
    char str1[100],str2[100];
    printf("enter the name:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    printf("copy %s",str2);
}
int main()
{
    copy(); 
    return 0;
}

