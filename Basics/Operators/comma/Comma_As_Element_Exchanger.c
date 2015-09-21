#include<stdio.h>
int main (void)
{
	int a = 5, b = 6;
	int c;
	
	printf("Before Exchange : a = %d, b = %d\n", a, b);

	c = a,a = b,b = c;
	
	printf("After Exchange  : a = %d, b = %d\n", a, b);


	return 0;
}
