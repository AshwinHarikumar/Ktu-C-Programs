#include <stdio.h>
void  main() 
{
    int n, a[30];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int *ptr = &a[n - 1];
    printf("Array elements in reverse order: ");
    for (int i = n; i > 0; i--) {
        printf("%d ", *ptr);
        ptr--; 
    }
}
