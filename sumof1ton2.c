#include<stdio.h>
void main()
{
    int n,s=0,i;
    printf("enter number= ");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        s+=i;
        i++;
    }
    printf("sum=%d",s);
}