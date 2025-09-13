
#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(int arr[], int n) {
    int i, j, k;
    int bucket[10][10];
    int count[10];

    for (i = 0; i < 10; i++) {
        count[i] = 0;
    }

    for (i = 0; i < n; i++) {
        int index = arr[i] / 10;
        bucket[index][count[index]++] = arr[i];
    }

    for (i = 0; i < 10; i++) {
        insertionSort(bucket[i], count[i]);
    }

    k = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < count[i]; j++) {
            arr[k++] = bucket[i][j];
        }
    }
}

void print(int arr[], int n){

for(int i=0; i<n;i++){
    printf("%d ", arr[i]);
}
printf("\n");
}

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array:");
    print(arr,n);

    bucketSort(arr, n);

    printf("Sorted array: ");
    print(arr,n);

    return 0;
}
