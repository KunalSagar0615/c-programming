#include<stdio.h>
int main()
{
    float sal,da,hra,tax,bs;
    int eid;
    char ename[100];
    FILE *fp;

    fp=fopen("salaryslip.txt","w");

    printf("enter employee details=");
    printf("ID :");
    scanf("%d",&eid);
    printf("\nenter name:");
    scanf("%s",&ename);
    printf("\nenter salary=");
    scanf("%f",&bs);
    printf("\nenter DA=");
    scanf("%f",&da);
    printf("\nenter HRA=");
    scanf("%f",&hra);
    printf("\nenter tax =");
    scanf("%f",&tax);
    sal=bs+((bs*(hra+da-tax))/100);
    fprintf(fp,"\n\t\ttotal salary :%.2f",sal);
    fprintf(fp,"\n\t\t--------------Employee salary slip-------------");
    fprintf(fp,"\n\t\tID           : %d",eid);
    fprintf(fp,"\n\t\tName         : %s",ename);
    fprintf(fp,"\n\t\tDA (%%)      :%f",da);
    fprintf(fp,"\n\t\tHRA (%%)     :%f",hra);
    fprintf(fp,"\n\t\tTAX (%%)     :%f",tax);
    return 0;
}