// PROGRAM 2:  Thanks to Shekhu for suggesting this program
#include<stdio.h>
int main()
{
   int x = 10;
   int y = (printf("%d",x++), printf("%d",++x));
    printf("%d\n", y);
   int z = (x++, ++x);
   printf("%d\n", z);
   getchar();
   return 0;
}
