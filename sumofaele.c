#include<stdio.h>
void main()
{
    int n,sum=0,i,a[100];
    printf("enter no of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
        sum=sum+a[i];
    printf("sum of array elements = %d",sum);
}