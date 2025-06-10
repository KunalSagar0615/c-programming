#include<stdio.h>
int main()
{
    float sal,da,hra,tax,bs;
    printf("enter salary=");
    scanf("%f",&bs);
    printf("enter DA=");
    scanf("%f",&da);
    printf("enter HRA=");
    scanf("%f",&hra);
    printf("enter tax =");
    scanf("%f",&tax);
    sal=bs+((bs*(hra+da-tax))/100);
    printf("salary = %.2f",sal);
    return 0;
}