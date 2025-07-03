#include <stdio.h>
int main()
{
    int a[100], n, i, sum = 0;
    printf("how meny element you want to enter :");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        sum = sum + a[i];

    printf("Addition is %d", sum);
    return 0;
}