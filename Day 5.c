#include <stdio.h>

int main() {
    int p, q;
    scanf("%d", &p); 
    
    int arr1[100];
    for(int i = 0; i < p; i++) {
        scanf("%d", &arr1[i]);
    }
    
    scanf("%d", &q); 
    
    int arr2[100];
    for(int i = 0; i < q; i++) {
        scanf("%d", &arr2[i]);
    }

    int i = 0, j = 0, k = 0;
    int merged[200];   
  
    while(i < p && j < q) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
 
    while(i < p) {
        merged[k++] = arr1[i++];
    }
    

    while(j < q) {
        merged[k++] = arr2[j++];
    }
    

    for(int x = 0; x < k; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");
    
    return 0;
}
