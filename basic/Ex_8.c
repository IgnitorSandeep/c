#include<stdio.h>
int g(int x)
{
    static int y=20;
    y=y+3;
    return (x+y);
}
int f(int x)
{
    int y;
    y=g(x);
    return (x+y);
}
int main(void)
{
     int i,x =5,y=10;
     for(i=1;i<=2;i++)
     {
         y+=f(x)+g(x);
         printf("%d",y);
     }
     return 0;
}
//output:
//*******
//

