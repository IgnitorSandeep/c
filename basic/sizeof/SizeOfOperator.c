#include <stdio.h>

int main()
{
 int i = 5;
 int int_size = sizeof(i++);
 printf("\n size of int_size = %d", int_size);
 printf("\n Value of i = %d", i);

 getchar();
 return 0;
}
