#include <stdio.h>


// Insertion Sort function

void insertionSort(int arr[], int n) {
    int i, key, j;
    // 1 to n-1 loop
    for (i = 1; i < n; i++) {
        key = arr[i];    // key = present element
        j = i - 1;       //  ager index er element er sathe compare

          // joto somoy ager element key theke large , right e sorano hosse
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

          // key ke correct  position e bosano hosse
        arr[j + 1] = key;
    }
}


// Array print korar function

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("After sorting: ");
    printArray(arr, n);

    return 0;
}

