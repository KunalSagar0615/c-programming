#include<stdio.h>
int main()
{
    int n,i,a[100],j,temp;
    printf("enter size = ");
    scanf("%d",&n);
    printf("\nenter elements = \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
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
    printf("\nsorted array =\n");
    for(i=0;i<n;i++)
    printf("\t%d",a[i]);
    return 0;
}