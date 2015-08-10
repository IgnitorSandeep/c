#include<stdio.h>
#include<stdlib.h>

int (*fp)(int,int);

int sum (int a ,int b)
{
    return a+b;
}

int main(void)
{
    fp = sum;
    int s = sum(2,3);
    printf("s = %d\n",s);

    int r = (*fp)(2,3);
    printf("r = %d\n",r);

    return 0;
}
