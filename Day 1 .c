
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    
    int arr[100];     
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    
    int pos, x;
    scanf("%d", &pos); 
    scanf("%d", &x);   
    
    for(int i = n; i > pos-1; i--) {
        arr[i] = arr[i-1];
    }
    
    arr[pos-1] = x;  
    n++;           
    

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
