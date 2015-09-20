#include<stdio.h>
void f(int x,int *py,int *ppz)
{
    int y,z,z;
    **ppz+=1;
    z=**ppz;
    *py+=z;
    y=*py;
    x+=3;

    return (x+y+z);
}
int main(void)
{
    int c,*b,**a;
    c=4,b=&c,a=&b;
    printf("%d",f(c,b,a));

    return 0;
}
