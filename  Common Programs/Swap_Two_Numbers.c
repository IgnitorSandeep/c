#include<stdio.h>

void simple_swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a =5,b = 10;
    printf("[BEFORE SWAP] a = %2d, b = %2d\n",a,b);
    simple_swap(&a,&b);
    printf("[AFTER  SWAP] a = %2d, b = %2d\n",a,b);
    printf("\n");
    //Addition and Substraction
    printf("[BEFORE SWAP] a = %2d, b = %2d\n",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("[AFTER  SWAP] a = %2d, b = %2d\n",a,b);
    printf("\n");
    //Multiplication & Division
    printf("[BEFORE SWAP] a = %2d, b = %2d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("[AFTER  SWAP] a = %2d, b = %2d\n",a,b);
    printf("\n");
    //Bitwise XOR Method
    printf("[BEFORE SWAP] a = %2d, b = %2d\n",a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("[AFTER  SWAP] a = %2d, b = %2d\n",a,b);
    printf("\n");


    return 0;
}
