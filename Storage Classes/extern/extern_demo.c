#include<stdio.h>
#include "extern_header.h"
extern int var;
int main(void)
{
    var =10;
    printf("var = %d\n",var);

    return 0;
}
