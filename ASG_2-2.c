#include<stdio.h>
#include <math.h>

int main (){

    int n, number;
    int counter = 0;
    int trace = 1;
    int temp;
    int dig;
    double sum = 0; 

    printf(" Enter a Number : ");
    scanf("%d", &n);
        number = n;
        temp = number;
while (trace != 0)
    {
        if(n != 0){
            n = n / 10;
            counter++;
        } else {
            printf("The Number of Digits = %d\n", counter);
            trace = 0;
        }
    }

while (temp != 0)
    {
        dig = temp % 10;
        sum = sum + pow(dig, counter);
        temp = temp / 10;
    }
    printf("Sum of digits = %f \n",sum);

if (sum==number){
    printf("Armstrong Number \n");
}else{
    printf("Not Armstrong Number \n");
}
    return 0;
}
