//Consider the following program

#include<stdio.h>
int x,y;
void p(int n)
{
    x =(n+2)/(n-3);
}
void q()
{
    int x,y;
    x =3,y=4;
    p(y);
    printf("%d\n",x);
}
int main(void)
{
    x =7;
    y=8;
    q();
    printf("%d\n",x);
    return 0;
}

// Output:
// ******
// 1- Static Scoping
//   3
//   6
// 2- Dynamic Scoping
//   6
//   7
