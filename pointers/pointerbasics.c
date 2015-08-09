#include<stdio.h>
int main(void)
{
    int* x;
    int* y;
    x = malloc(sizeof(int));
    *x = 42;
    *y = 13;
     //y = x;
    *y = 13;
    printf("value of x is : %d\n",*x);
    printf("value of y is : %d\n",*y);
}
