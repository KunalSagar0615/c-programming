#include<stdio.h>
void main()
{
    int n,i;
    printf("enter number = ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(n%i==0)
            printf("%d\n",i);
        i++;
    }
}