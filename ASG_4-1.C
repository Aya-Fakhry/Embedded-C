#include <stdio.h>

void edit(int *num) {
    (*num)++;  
}

int main() {
    int x;
    int HIST[10];  
    int count = 0;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    HIST[count++] = x;

    printf("Before edit: %d\n", x);
    edit(&x);
    printf("After edit: %d\n", x);

    HIST[count++] = x;

    int extras[] = {5, 20, 80};
    for (int i = 0; i < 3; i++) {
        HIST[count++] = extras[i];
    }

    printf("\nStored values: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", HIST[i]);
    }

    return 0;
}
