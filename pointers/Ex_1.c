#include<stdio.h>
int main(void)
{
    int a =5;
    int *b = &a;
    printf("value of a = %d\n",a);
    printf("value of b = %d\n",b);
    *b=10;
    printf("value at pointer *b is %d\n",*b);
    printf("value of a is %d\n",a);

    return 0;
}
