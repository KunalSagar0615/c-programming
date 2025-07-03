#include<stdio.h>
#include<stdio.h>
void main()
{
    int n,i,a[100],max;
    printf("enter size = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=a[0];
    // for(i=1;i<n;i++)
    // {
    //     if(max<a[i])
    //         max=a[i];
    // }

    for(i=1;i<n;i++)
    {
        max=(max<a[i])?a[i]:max;
    }

    // for(i=1;i<n;i++)
    // {
    //     max=fmax(max,a[i]);
    // }
    printf("max no = %d ",max);
}