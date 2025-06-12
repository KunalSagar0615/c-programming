#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 nos=\n");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("max no is %d",b);
}