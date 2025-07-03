#include<stdio.h>
void main()
{
    int n,i,a[100],flag=0,ele;
    printf("enter size = ");
    scanf("%d",&n);
    printf("\nenter elements = \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n enter element to search = ");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d found at index %d",ele,i);
    else
        printf("element not found");
}