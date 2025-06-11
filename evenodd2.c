#include<stdio.h>
void main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%s no",(n%2==0)?"even":"odd");
}