#include<stdio.h>
void main()
{
    int n,a[100],i,mid,low,heigh,j,temp,key,flag=0;
    printf("enter size = \n");
    scanf("%d",&n);

    printf("\nenter element =\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("\nenter key = \n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    low=0;
    heigh=n-1;
    while(low<=heigh)
    {
        mid=(low+heigh)/2;
        if(a[mid]==key)
        {
            flag=1;
            break;
        }
        else if(a[mid]>key)
            heigh=mid-1;
        else
            low=mid+1;
    }
    if(flag==1)
        printf("element found ");
    else
        printf("element not found");
}