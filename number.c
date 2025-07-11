#include<stdio.h>
#include "number1.h"
int main()
{
    int n,y,ch;

    
    
    while(1)
    {
        printf("\n \n 1.Digit Count \n 2.Armstrong \n 3.Palindrome \n 4.Fabbonci \n 5.Reverse \n 6.Factorial \n 7.Neon \n 8.Prime \n 9.Perfect \n 10.power \n 11.Exit \n \n Enter a choice =\n");
        scanf("%d",&ch);
        
        if(ch == 11)
        return 0;
        
        if(ch<1 || ch>11)
        {
            printf("\n INVALID CHOICE !!");
            continue;
        }
        printf("\n enter a no = ");
            scanf("%d",&n);
    switch(ch)
    {
        case 1:
            printf("\n digit count =%d",digitcount(n));
            break;

        case 2:
            if(armstrong(n)==n)
                printf("\n armstrong ");
            else
                printf("\n not armstrong ");
            break;

        case 3:
            if(reverse(n)==n)
                printf("\n palindrome ");
            else 
                printf("\n not palindrome ");
            break;

        case 4:
            faboncii(n);
            break;

        case 5:
            printf("\n reverse no =%d\n",reverse(n));
            break;

        case 6:
            printf("\n factorial = %d\n",fact(n));
            break;

        case 7:
            if(neon(n)==n)
                printf("\n neon no ");
            else
                printf("\n not neon ");
            break;

        case 8:
            if(prime(n) || n==2 || n==3)
                printf("\n %d is prime ",n);
            else 
                printf("\n %d is not prime ",n);
            break;

        case 9:
            if(perfect(n)==n)
                printf("\n %d is perfect no ",n);
            else
                printf("\n %d is not perfect no ",n);
            break;

        case 10:
        printf("\n enter power = ");
            scanf("%d",&y);
        printf("\n %d of %d is %d",n,y,power(n,y));
        break;
        case 11:return 0;
            break;
    }
    }
    return 0;
}