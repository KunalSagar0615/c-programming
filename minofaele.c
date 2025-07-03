#include<stdio.h>
#include<stdio.h>
void main()
{
    int n,i,a[100],min;
    printf("enter size = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    
    for(i=0;i<n;i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("min ele = %d",min);
}