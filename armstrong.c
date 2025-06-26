#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp,cnt=0;
    float sum=0;
    printf("enter number = ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    n=temp;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,cnt);
        n=n/10;
    }
    if(sum==temp )
        printf("armstrong");
    else 
        printf("not armstrong");
    return 0;
}