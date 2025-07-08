#include<stdio.h>
void main()
{
    int a[100],*p,i,n;
    printf("enter size = \n");
        scanf("%d",&n);

    p=&a[0];

    printf("\n enter elements = \n");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);

    printf("\n given data =\n ");
    for(i=0;i<n;i++)
        printf("\t%d",p[i]);
}