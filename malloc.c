#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (ptr + i));
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
