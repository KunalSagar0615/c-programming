#include<stdio.h>
void main()
{
    int n,a[100],i,j,key;
    printf("enter size  = ");
    scanf("%d",&n);

    printf("\nenter elements = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n array =\n");
    for(i=0;i<n;i++)
        printf("\t%d\t",a[i]);

    printf("\nenter key=\n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {   
        
        if(key==a[i])
        {
        for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            i--;        
        }
        
    }

    printf("\n new array =\n");
    for(i=0;i<n;i++)
        printf("\t%d\t",a[i]);
}