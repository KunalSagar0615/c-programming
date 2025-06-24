#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter number = ");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("\n factorial of %d is %d",n,fact);
}