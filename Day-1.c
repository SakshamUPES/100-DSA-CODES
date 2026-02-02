#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, pos, x;
    

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
    scanf("%d", &x);
 
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        free(arr);
        return 1;
    }
  
    int *new_arr = (int*)realloc(arr, (n + 1) * sizeof(int));
    if (new_arr == NULL) {
        printf("Memory reallocation failed\n");
        free(arr);
        return 1;
    }
    arr = new_arr;
    

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
  
    arr[pos - 1] = x;
    

    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    free(arr);
    return 0;
}
