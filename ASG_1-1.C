#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if ((n/2)*2 == n) {

        printf("The Number is odd = 0\n");
        printf("The Number is even = 1\n");
    }else{

        printf("The Number is odd = 1\n");
        printf("The Number is even = 0\n");
    }

    return 0;
}
