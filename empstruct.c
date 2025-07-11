#include<stdio.h>
struct emp
{
    int id;
    char name[100];
    float salary;
    char dept[100]; 
};
int main()
{
    struct emp e;                    
    printf("Enter emp details = ");  
    printf("\n Enter id = ");       
    scanf("%d",&e.id);              
    printf("\n Enter name = ");     
    scanf("%s",&e.name);            
    printf("\n Enter salary = ");
    scanf("%f",&e.salary);
    printf("\n Enter department = ");
    scanf("%s",&e.dept);

    printf("\n Employee details = ");
    printf("\n Employee Name = %s ",e.name );
    printf("\n Employee Id   = %d ",e.id );
    printf("\n Employee Salary = %.2f ",e.salary );
    printf("\n Employee Department = %s ",e.dept );

    return 0;
}