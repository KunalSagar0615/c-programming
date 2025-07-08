#include<stdio.h>
void main()
{
    int a;
    int *p;
    printf("\n enter a =\n");
    scanf("%d",&a);

    p=&a;
    printf("\n %d",*p);
}