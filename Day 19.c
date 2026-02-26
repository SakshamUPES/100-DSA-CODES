#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;


    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are required.\n");
        return 0;
    }

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    qsort(arr, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;
    int minSum = INT_MAX;
    int minLeft = left, minRight = right;


    while (left < right) {
        int sum = arr[left] + arr[right];

        if (abs(sum) < abs(minSum)) {
            minSum = sum;
            minLeft = left;
            minRight = right;
        }

        if (sum < 0)
            left++;
        else
            right--;
    }


    printf("%d %d\n", arr[minLeft], arr[minRight]);

    return 0;
}
