#include<stdio.h>
void main()
{
    int n,i,cnt=0;
    printf("enter a number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
           cnt++;
    }
    if(cnt==2)
        printf("no is prime");
    else 
        printf("no is not prime");
}