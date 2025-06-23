#include<stdio.h>
void main()
{
    char nm[20];
    int id;
    float bs,tax,hra,da,totalsal,inhand;
    printf("\nenter emp name=");
    scanf("%s",&nm);
    printf("\n enter emp id=");
    scanf("%d",&id);
    printf("\n enter basic salary=");
    scanf("%f",&bs);
    if(bs<0)
    {
        printf("\n salary is invalid");
    }
    else{
    printf("\nenter hra=");
    scanf("%f",&hra);
    printf("\n enter da=");
    scanf("%f",&da);
    
    if(bs<=200000)
        tax=15;
    else if(bs<=150000)
        tax=10;
    else if(bs<=100000)
        tax=5;
    else if(bs<=80000)
        tax=3;
    else if(bs<=50000)
        tax=0;

    totalsal=bs+(bs*(da+hra-tax)/100);
    inhand=totalsal;
    printf("\nemp name=%s",nm);    
    printf("\n emp id=%d",id);
    printf("\n basic salary=%.2f ",bs);
    printf("\n DA(%%)= %.2f",da);
    printf("\n HRA(%%) =%.2f",hra);
    printf("\n TAX(%%)= %.2f",tax);
    printf("\n total salary=%.2f",totalsal);
    printf("\n in hand salary=%.2f",inhand); 
    }
}