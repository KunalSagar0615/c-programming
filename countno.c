#include<stdio.h>
void main()
{
    int n,ctr=0;
    printf("enter a no = ");
    scanf("%d",&n);
    while(n>0)
    {
        ctr++;
        n=n/10;
    }
    printf("\n no of digit in given no is %d",ctr);
}