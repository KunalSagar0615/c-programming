#include<stdio.h>
void main()
{
    int n,count=0,fact=0,i;
    printf("enter no = ");
    scanf("%d",&n);

    printf("\n factors = \n");
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("\t%d",i);
            count++;
            fact+=i;
        }
        i++;
    }
    printf("\n total count of factors =%d",count);
    printf("\n sum of factors =%d",fact);

}