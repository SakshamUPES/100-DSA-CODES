#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    
    int arr[100];    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }
    
    if(n == 0) {
        printf("\n");
        return 0;
    }
    

    int k = 1;  
    
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[i-1]) { 
            arr[k] = arr[i];
            k++;
        }
    }
    

    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

