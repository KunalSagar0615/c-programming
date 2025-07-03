#include<stdio.h>
void main()
{
    int n,a[100],i;
    printf("enter no of elements you want = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);                             
    printf("\n\ngiven data = ");                       
    for(i=0;i<n;i++)                                   
        printf("%d\t",a[i]);                           
}