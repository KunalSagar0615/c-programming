#include<stdio.h>
void main()
{
    int x,y,result=1,i;
    printf("enter value = ");
    scanf("%d",&x);
    printf("enter power = ");
    scanf("%d",&y);
    i=1;
    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("\n %d of %d = %d",x,y,result);
}