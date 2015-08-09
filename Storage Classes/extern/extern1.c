#include<stdio.h>
int main()
{
    extern int var;
    printf("%d",sizeof(var));
    return 0;
}
