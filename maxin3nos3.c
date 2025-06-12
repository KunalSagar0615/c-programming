#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("enter 3 nos=\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("max no is %.2f",fmax(a,fmax(b,c)));
}