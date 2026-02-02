#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos;
    

    scanf("%d", &n);
    

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    scanf("%d", &pos);
    

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        free(arr);
        return 1;
    }
    
    
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    

    int *new_arr = (int*)realloc(arr, (n - 1) * sizeof(int));
    if (new_arr == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);
        return 1;
    }
    arr = new_arr;
    n--; 
    

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    free(arr);
    return 0;
}

