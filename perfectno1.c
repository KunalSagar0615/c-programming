#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("enter number = ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s==n)
        printf("no is perfect ");
    else
        printf("no is not perfect");
}