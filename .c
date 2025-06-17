#include<stdio.h.>
void main()
{
    int rollno;
    char name[100],sub1[100],sub2[100],sub3[100],grade;
    float m1,m2,m3,total,avg;
    printf("enter student details=");
    printf("\nenter name of stud=");
    scanf("%s",&name);
    printf("\n enter roll no= ");
    scanf("%d",&rollno);
    printf("sub1=");
    scanf("%s",&sub1);
    printf("sub2=");
    scanf("%s",&sub2);
    printf("sub3=");
    scanf("%s",&sub3);
    printf("enter marks1=");
    scanf("%f",&m1);
    printf("enter marks2=");
    scanf("%f",&m2);
    printf("enter marks3=");
    scanf("%f",&m3);

    total=m1+m2+m3;

    avg=total/3;

    if(avg<=100 && avg>=90)
        grade='A';
    else if(avg<90 && avg >=80)
        grade='B';
    else if(avg<80 && avg>=70)
        grade='C';
    else if(avg<70 && avg>=50)
        grade='D';
    else
        grade='F';
    
    printf("\n name of student     =%s",name);
    printf("\n roll no             =%d",rollno);
    printf("\n name of sub1        =%s",sub1);
    printf("\n marks1 of sub1      =%.2f",m1);
    printf("\n name of sub2        =%s",sub2);
    printf("\n marks2 of sub2      =%.2f",m2);
    printf("\n name of sub3        =%s",sub3);
    printf("\n marks3 of sub3      =%.2f",m3);
    printf("\ntotal marks          =%.2f",total);
    printf("\n avg marks           =%.2f",avg);
}