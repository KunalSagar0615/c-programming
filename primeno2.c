#include<stdio.h>
#include<math.h>
void main()
{
    int flag,n,i;
    printf("enter a number = ");
    scanf("%d",&n);
    flag=1;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("prime");
    else 
        printf("not prime");
}