#include<stdio.h>
void main()
{
    int n,i,r=0;
    printf("enter no = ");
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        if(n%i==0)
        {
            r=r+i;
        }
        i++;
    }
    if(r==n)
        printf("%d is perfect no",n);
    else
        printf("%d is not perfect no",n);
}