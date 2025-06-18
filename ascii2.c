#include<stdio.h>
void main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        printf("%c is alphabet",ch);
    else if(ch>='0' && ch<='9')
        printf("%c is digit",ch);
    else
        printf("%c is special character",ch);
}