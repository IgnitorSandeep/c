// Program 1
#include<stdio.h>
int main()
{
  char arr[] = "geeksforgeeks";
  char *p = arr;
  ++*p;
  printf(" %c", *p);
  getchar();
  return 0;
}
