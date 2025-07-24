
#include<stdio.h>
#include<stdlib.h>

int main (){

    int n;
    int c1 =0;
    int c2 =1;
    int c3 =0;

    printf(" Enter The Number of Terms : ");
    scanf("%d", &n);

    if(n<=0){
        printf(".....Error You Entered negtive number or zero..... ");
        exit(0);
    }
        printf(" %d ,\t ",c1);
        printf(" %d ,\t ",c2);
for (int i = 1 ; i <= n-2 ; i++){


        c3 = c1 + c2;
        c1 = c2;
        c2 = c3;
        printf(" %d ,\t ",c3);

}
        printf("........");


return 0 ;
}
