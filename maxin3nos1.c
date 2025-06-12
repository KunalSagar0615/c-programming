#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 nos=\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    b=a;
    if(c>b)
    b=c;
    printf("max no is %d",b);
}