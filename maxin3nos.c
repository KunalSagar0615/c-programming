#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 nos=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>c)
    printf("%d is max ",a);
    else if(b>a && b>c)
    printf("%d is max",b);
    else
    printf("%d is max",c);
}
