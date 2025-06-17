#include<stdio.h>
void main()
{
    int id1=1,id2=2,id3=3,qty1,qty2,qty3,p1,p2,p3;
    char prod1[100],prod2[100],prod3[100],cname[100];
    float d,total,t1,t2,t3,totaldiscount,totalprize;
    printf("enter cust name=");
    scanf("%s",&cname);
    printf("enter product name=");
    scanf("%s",&prod1);
    printf("enter quantity=");
    scanf("%d",&qty1);
    printf("enter prize=");
    scanf("%d",&p1);
    printf("enter product name=");
    scanf("%s",&prod2);
    printf("enter quantity=");
    scanf("%d",&qty2);
    printf("enter prize=");
    scanf("%d",&p2);
    printf("enter product name=");
    scanf("%s",&prod3);
    printf("enter quantity=");
    scanf("%d",&qty3);
    printf("enter prize=");
    scanf("%d",&p3);

    t1=p1*qty1;
    t2=p2*qty2;
    t3=p3*qty3;

    total=t1+t2+t3;
     
    if(total>1000)
        d=10;
    else if(total>2000)
        d=15;
    else if(total>3000)
        d=20;
    
    totaldiscount=(d/total)*100;
    totalprize=total-totaldiscount;
    printf("\n%s",cname);
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n|   ID    |         NAME         |     PRICE     |       QUANTITY     |     TOTAL    |");
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n%9d %22s %15d %20d %14.2f",id1,prod1,p1,qty1,t1);
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n%9d %22s %15d %20d %14.2f",id2,prod2,p2,qty2,t2);
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n%9d %22s %15d %20d %14.2f",id3,prod3,p3,qty3,t3);
    printf("\n--------------------------------------------------------------------------------------");
    printf("\n\t\ttotal amount            =%.2f ",total);
    printf("\n\t\tdiscount                =%.2f",totaldiscount);
    printf("\n\t\tpayable amount          =%.2f",totalprize);


}