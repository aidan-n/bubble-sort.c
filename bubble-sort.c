#include <stdio.h>

int main() {

    int i;
    int n;
    
    printf("Enter number of elements\n");
    // Get number of elements, at address n
    scanf("%d", &n);

    int arr[n];

    // User inputs data
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++) {
           
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                //swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted numbers:\n"); 

    for (i = 0; i < n; i ++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
