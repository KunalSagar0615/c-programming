#include<stdio.h>
#include<math.h>
int digitcount(int n)
{
    int cnt=0;
    while(n>0)
    {
        cnt ++;
        n=n/10;
    }
    return cnt;
}

int armstrong(int n)
{
    int r,cnt;
    cnt=digitcount(n);
    float result;
    while(n>0)
    {
        r = n%10;
        result +=pow(r,cnt);
        n=n/10;
    }
    return result;
}

int reverse(int n)
{
    int r,rev=0;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    return rev;
}

void faboncii(int n)
{
    int i,a=0,b=1,next;
    printf("\nfaboncii series  %d %d\n",a,b);
    for(i=2;i<=n;i++)
    {
        next=a+b;
        printf(" %d",next);
        a=b;
        b=next;
    }
}

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int neon(int n)
{
    n=n*n;
    int r,neon=0;
    while(n>0)
    {
        r=n%10;
        neon=neon+r;
        n=n/10;
    }
    return neon;
}

int prime(int n)
{
    int i,no=1;
    if(n<2)
        return 0;
    if(n%2==0 || n%3==0)
        return 0;
    for(i=5;i<=sqrt(n);i+=6)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int perfect(int n)
{
    int i,sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}

int power(int n,int y)
{
    int result=1,i;
    
    for(i=0;i<y;i++)
    {
        result*=n;
    }
    return result;
}