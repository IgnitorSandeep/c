#include<stdio.h>
int main(void)
{
    int   a = 5;
    int  *b = &a;
    int **c = &b;

    printf("a=%d, b=%d, c=%d\n",a,b,c);
    printf("b = %d & *b = %d\n",b,*b);
    printf("c = %d , *c = %d & **c=%d\n",c,*c,**c);

    return 0;
}
