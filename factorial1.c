#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("enter number=");
    scanf("%d",&n);
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("\n factorial = %d",fact);

}