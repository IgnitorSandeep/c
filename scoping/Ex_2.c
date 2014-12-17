//  Find the output of the program if
//      1. Static Scoping is used and
//      2. Dynamic Scoping

#include<stdio.h>
int a=1,b=2;
void d(void)
{
    printf("%d %d\n",a,b);
    a =30;
    b=35;
    printf("%d %d\n",a,b);
}
void c(void)
{
    int a =20;
    printf("%d %d\n",a,b);
    d();
    printf("%d %d\n",a,b);
}
int main()
{
    int b= 6;
    printf("%d %d\n",a,b);
    c();
    printf("%d %d\n",a,b);
    d();
    printf("%d %d\n",a,b);
}

// Output:
// ******
// 1- Static Scoping
//   1  6
//   20 2
//   1  2
//   30 35
//   20 35
//   30 6
//   30 35
//   30 35
//   30 6

// 2- Dynamic Scoping
//
