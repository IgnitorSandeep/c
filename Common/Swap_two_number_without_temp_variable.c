#include<stdio.h>
int main(void)
{
    int x =10,y =5;
    printf("[Before Swap] x = %3d & y = %3d.\n",x,y);
    x = x^y;
    y = x^y;
    x = x^y;
    printf("[After Swap]  x = %3d & y = %3d.\n",x,y);
    return 0;
}
