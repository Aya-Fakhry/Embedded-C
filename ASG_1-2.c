#include<stdio.h>
int main (){

int x, y;
puts("Enter the number:");
scanf("%d", &x);
puts("Enter the bit position to toggle:");
scanf("%d", &y);

printf("Result = %d\n", (1 << y) ^ x);

    return 0 ;
}
