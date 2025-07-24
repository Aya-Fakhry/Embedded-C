
#include<stdio.h>

int swap(int a , int b){
    int sw;

    printf(" Before Swaping 2 Numbers \n");
    printf("N1 = %d ",a);
    printf("\n N2 = %d \n", b);

    sw = a;
    a = b;
    b = sw;

    printf("\n After Swaping 2 Numbers \n");
    printf("N1 = %d",a);
    printf("\n N2 = %d \n", b);
}

int main (){

    int x, y;

    printf(" Enter 2 Numbers \n");
    scanf("%d", &x);
    scanf("%d", &y);

    swap( x,y );

return 0 ;
}
