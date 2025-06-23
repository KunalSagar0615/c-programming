#include<stdio.h>
void main()
{
    int n,s=0,i;
    printf("\n enter number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("\n %d is sum of 1 to %d",s,n);
}