#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{                                                                                       
    int x,y;
    printf("\n enter 2  nos = \n");
    scanf("%d%d",&x,&y);

    swap(&x,&y);
    printf("\n after swapping =\n x=%d \n y=%d",x,y);

}