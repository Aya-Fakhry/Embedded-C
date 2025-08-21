#include <stdio.h>

void fillarr(int arr[], int size) {
    printf("Enter %d elements \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void reversearr(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    fillarr(arr, size);
    reversearr(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
