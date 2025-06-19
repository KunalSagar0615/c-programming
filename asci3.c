#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch;
    printf("enter entity:");
    scanf("%c",&ch);
    if(isalpha(ch))
        printf("%c is alphabet",ch);
    else if(isdigit(ch))
        printf("%c is digit",ch);
    else
        printf("%c is special character ",ch);
}