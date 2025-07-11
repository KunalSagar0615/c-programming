#include<stdio.h>
struct Skbit{
    int id;
    long int phone;
    char name[100];
    char addr[100];
    char email[100];
}sk[100];
void main()
{
   
    int i,n;
    printf("\n enter n = ");
    scanf("%d",&n);
    printf("\n enter emp data = ");
    for(i=0;i<n;i++)
    {
        printf("\n enter id = ");
            scanf("%d",&sk[i].id);
        printf("\n Enter phone = ");
            scanf("%ld",&sk[i].phone);
        printf("\n Enter name = ");
            scanf("%s",&sk[i].name);
        printf("\n Enter address= ");
            scanf("%s",&sk[i].addr);
        printf("\n Enter email = ");
            scanf("%s",&sk[i].email);
    }
    printf("\n \n ---------------------Employee Details ----------------------");

for(i=0;i<n;i++)
{
    printf("\n Employee ID = %d ",sk[i].id);
    printf("\n Employee Name = %s ",sk[i].name);
    printf("\n Employee Contact no = %ld ",sk[i].phone);    
    printf("\n Employee Address= %s ",sk[i].addr);
    printf("\n Employee Email = %s ",sk[i].email);
    printf("\n\n");
}
}