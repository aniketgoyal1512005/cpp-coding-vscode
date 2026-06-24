#include <stdio.h>
#include <math.h>

void printvalues(int arr[], int n, int key) {
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[i + 1] = key; 
}

int main() {
    int key;
    int arr[11] = {1, 2, 3, 5, 6};
    int n = 5; 

    printf("Enter number: ");
    scanf("%d", &key);

    printvalues(arr,n,key);
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
