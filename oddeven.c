#include<stdio.h>
void main()
{
    int n,i,odd=0,even=0;
    printf("enter number = ");
    scanf("%d",&n);

    printf("\n even number = \n");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);            
            even=even+i;
        }
    }
    printf("\n sum of even number=%d",even);
    
    printf("\n odd number = \n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);            
            odd=odd+i;
        }
    }
    printf("\nsum of odd numbers = %d",odd);

}