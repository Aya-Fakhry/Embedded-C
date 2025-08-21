#include<stdio.h>
#include<stdlib.h>

struct complex_number {
    float real;
    float imag;
}comp_no[2];


int main (){

    comp_no[2];

puts("Enter A 2 complex Numbers ");
    for(int i =0 ; i<2 ; i++){
        printf("\nEnter complex Numbers No.%d \n",i+1);
        printf("Real part :  ");
        scanf("%f",&comp_no[i].real);
        printf("complex part :  ");
        scanf("%f",&comp_no[i].imag);

    }
float sum_real = comp_no[0].real + comp_no[1].real;
float sum_imag = comp_no[0].imag + comp_no[1].imag;

    printf("\nSum = %.2f + %.2fi\n", sum_real, sum_imag);


    return 0;
}
