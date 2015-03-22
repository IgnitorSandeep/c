#include<stdio.h>
int main(void)
{
    char name[]="sandeep";
    char *ptr=name;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}