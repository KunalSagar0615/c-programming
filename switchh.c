#include<stdio.h>
void main()
{
    int ch,a,b;
    printf("enter two nos=\n");
    scanf("%d%d",&a,&b);
    printf("1.addition \n 2.substraction \n 3.division \n 4.multiplication");
    printf("\n enter your choice=");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:printf("additon= %d",(a+b));
        break;
    case 2:printf("substraction= %d",(a-b));
        break;
    case 3:printf("division= %d",(a/b));
        break;
    case 4:printf("multiplication= %d",(a*b));
        break;
    default:printf("wrong choice");
    }
}