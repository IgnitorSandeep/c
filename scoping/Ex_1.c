//  Find the output of the program if
//      1. Static Scoping is used and
//      2. Dynamic Scoping

#include<stdio.h>
int a =5 ;
void D(void)
{
    int a =25;
    printf("%d",a);
}
void C(void)
{
    int a =20;
    D();
}
void B(void)
{
    int a =15;
    C();
}
int main()
{
    int a =10;
    B();
}

// Output:
// ******
// 1- Static Scoping
// 25

// 2- Dynamic Scoping
// 25
