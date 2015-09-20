#include<stdio.h>
int main(void)
{

    int a = 5,  b =6;

    printf("Before Swap : a =%2d & b = %2d\n",a,b);
    swap(&a,&b);
    printf("After Swap  : a =%2d & b = %2d\n",a,b);

    return 0;
}

