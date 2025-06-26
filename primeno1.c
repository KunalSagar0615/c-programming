#include<stdio.h>
void main()
{
    int n,i,ctr=0;
    printf("enter a no = ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            ctr++;
    }
    if(ctr==0)
        printf("no is prime");
    else 
        printf("no is not prime");
}