#include <stdio.h>

void fillArr(int arr[], int size) {
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArr(int arr[], int size) {
    printf("The elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size, int *pos) {
    int max = arr[0];
    *pos = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            *pos = i;
        }
    }
    return max;
}

int findMin(int arr[], int size, int *pos) {
    int min = arr[0];
    *pos = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            *pos = i;
        }
    }
    return min;
}

int main() {
    int arr_1[5];
    int max, min, maxPos, minPos;

    fillArr(arr_1, 5);
    printArr(arr_1, 5);

    max = findMax(arr_1, 5, &maxPos);
    min = findMin(arr_1, 5, &minPos);

    printf("Maximum NO. is %d at position %d\n", max, maxPos + 1);
    printf("Minimum NO. is %d at position %d\n", min, minPos + 1);

    return 0;
}
