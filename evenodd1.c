#include<stdio.h>
void main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n&1==0)
    printf("no is even");
    else
    printf("no is odd");
}