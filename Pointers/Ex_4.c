#include<stdio.h>
void f(int *p,int *q)
{
    p=q;
    *p=2;
}
int i=0,j=1;
int main(void)
{
    f(&i,&j);
    printf("i=%d & j=%d",i,j);

    return 0;
}
