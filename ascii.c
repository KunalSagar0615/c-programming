#include<stdio.h>
void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
        printf("%c is alphabet",ch);
    else if(ch>=48 && ch<=57)
        printf("%c is digit",ch);
    else
        printf("%c is special character",ch);
}