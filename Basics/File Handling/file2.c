#include<stdio.h>
extern int var=20;
int main(void)
{
    //var =10;
    printf("%d",var);

    return 0;
}

/**
extern int var;

mean varible is declare but not defined mean memory is not allocated to the var.

var = 10;
So if you will try to change the value of the var then it will give compile time error.

But in this case suppose there is a c/h file that declares

But once you write extern as

extern int var=10;

It means it is declared and defined also.






*/
