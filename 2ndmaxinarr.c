#include <stdio.h>

int main() {
    int i, first, second,arr[100],n;
    printf("enter size = ");
    scanf("%d",&n);
    printf("\n enter elements = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }    
    first = second = arr[0];
 
    for(i = 1; i < n; i++) {
        if(arr[i] > first) 
        {
            first = arr[i];
        }
    }
    
    for(i = 0; i < n; i++) {
        if(arr[i] != first) {
            if(arr[i] > second) {
                second = arr[i];
               
            }
        }
    }
    printf("Second largest number is: %d\n", second);
    return 0;
}
