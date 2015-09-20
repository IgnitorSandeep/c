// PROGRAM 2:  Thanks to Shekhu for suggesting this program
#include<stdio.h>
int main()
{
   int x = 10;
   int y = (x++, ++x);
   printf("%d", y);
   getchar();
   return 0;
}
