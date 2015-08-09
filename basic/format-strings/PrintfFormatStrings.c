#include<stdio.h>

int main(){

    int a, b;
    float c, d;

    a =15;
    b=a/2;
    c=15.3;
    d=c/3;

    //Formatted Output
    printf("%d\n",b);
    printf("%3d\n",b);
    printf("%03d\n",b);
    printf("%f\n",d);
    printf("%0.3f\n",d);
    printf("%3.2f\n",d);
    printf("%03.2f\n",d);

    //Formatter Other Type
    printf("The color : %s\n","blue");
    printf("Hexadecimal Number : %x\n",255);
    printf("Octal Number :%o\n",255);
    printf("Unsigned Value :%u\n",150);
    printf("Percentage Sign : %d%%\n",10);


    //Formatting String
    printf(":%s:\n", "Hello, world!");
	printf(":%15s:\n", "Hello, world!");
	printf(":%.10s:\n", "Hello, world!");
	printf(":%-10s:\n", "Hello, world!");
	printf(":%-15s:\n", "Hello, world!");
	printf(":%.15s:\n", "Hello, world!");
	printf(":%15.10s:\n", "Hello, world!");
	printf(":%-15.10s:\n", "Hello, world!");

    return 0;
}
