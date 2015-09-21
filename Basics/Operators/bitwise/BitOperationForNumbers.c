#include<stdio.h>

/* bitcount : count 1 bits int x */
int bitcount(unsigned x)
{
	int b;

	for(b=0; x !=0; x >>= 1)
		if(x & 1)
		   b++;

	return b;
}

int main(void)
{
	int number;
	int _bitcount;

	printf("Enter the number whose bit you want to count : \n");
	scanf("%d",&number);
	
	_bitcount = bitcount(number);
	printf("%d has %d 1's in its binary representation.\n",number,_bitcount);
	

	return 0;
}
