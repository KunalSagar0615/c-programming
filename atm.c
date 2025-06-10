#include<stdio.h>
int main()
{
    int amt;
    printf("enter amount=");
    scanf("%d",&amt);
    printf("10 * %d",amt/10);
    amt=amt%10;
    printf("\n 5 * %d",amt/10);
    amt=amt%5;
    printf("\n 1 * %d",amt/1);
    return 0;    
}