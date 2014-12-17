#include<stdio.h>
int main(void)
{
    int a;
    int *b=&a;
    scanf("%d",b);
    printf("%d",a+20);

    return 0;
}
