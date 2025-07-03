// array element find program //
#include <stdio.h>
int main()
{
    int a[100], i, n, key, flag;

    printf("how meny element you want to enter :");
    scanf("%d", &n);

    printf("enter %d elements :",n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element for search :");
    scanf("%d", &key);
    

    flag = 0;

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Element Found...");
    else
        printf("Element Not Found...");

    return 0;
}