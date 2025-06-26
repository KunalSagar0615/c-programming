#include<stdio.h>
void main()
{
    int n,r,sum=0,t;
    printf("enter a number = ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    t=sum;
    while(t>0)
    {
        r=t%10;
        printf("%d ",r);
        t=t/10;
    }
    
}