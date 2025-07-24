
#include<stdio.h>

int main (){

    int x, y;
    char op;

     printf("Enter First Number then operator then Second Number.\n");
     scanf("%d %c %d", &x, &op, &y);

    switch (op)
    {
    case '+':
        printf("Addition Operation Result = %d \n", x+y);   
        break;
    case '-':
        printf("Sub. Operation Result = %d \n", x-y);   
        break;
    case '/':
    {
        if (y== 0)
            printf("Error.....Cant divid by zero\n");   
            else
            printf("Division Operation Result = %f \n", (float)x/y);   
            break;
    }
    case '*':
        printf("Multiplication Operation Result = %d \n", x*y);   
        break;
    default:
        printf(" Re-Enter the operation again......wronge operation  \n");
        break;
    }

return 0 ;
}
