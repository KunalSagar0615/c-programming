// frequency of the element occure in the array. //
#include <stdio.h>

int main()
{
    int a[100], i, n, key, cnt = 0;
    

    printf("Enter how much element you want :");
    scanf("%d", &n);

    printf("Enter %d elemetns :", n);

    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }    

    printf("Enter element to find occure :");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
            cnt++;
    }

    if (cnt == 0)
        printf("Not found");
    else
        printf("Count is : %d", cnt);
    return 0;
}