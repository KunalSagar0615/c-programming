#include<stdio.h>
void main()
{
    int n;
    printf("enter number=");
    scanf("%d",&n);
    if(n>=0)
    {
    if(n%2==0)
        printf("even no");
    else
        printf("odd no");
    }
    else
        printf("enter positive no");



    // logic 2
    printf("\n \n enter number=");
    scanf("%d",&n);
    if(n>=0)
    {
    if(n&1==0)
        printf("even no");
    else
        printf("odd no");
    }
    else
        printf("enter positive no");


    // logic 3
    printf("\n \n enter number=");
    scanf("%d",&n);
    if(n>=0)
    {
    (n%2==0)?printf("even no"):printf("odd no");
    }
    else
        printf("enter positive no");

    // logic 4
    printf("\n \n enter number=");
    scanf("%d",&n);
    if(n>=0)
    {
    printf("%s",(n%2==0)?"even":"odd");
    }
    else
        printf("enter positive no");
}