#include<stdio.h>
int main(void)
{
     int var =5;
     printf("%d",var--);
     if(var)
        main();
     return 0;
}
//output:
//*******
//Stack Overflow

