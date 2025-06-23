#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter 3 nos=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>c)
        printf("%d is grater",a);
    else if(b>a && b>c)
        printf("%d is grater",b);
    else
        printf("%d is grater",c);

    printf("\n \n enter 3 nos=");
    scanf("%d%d%d",&a,&b,&c);
    b=(a>b)?a:b;
    b=(c>b)?c:b;
    printf("%d is grater",b);

    printf("\n \n enter 3 nos=");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d is grater",fmax(a,fmax(b,c)));

}