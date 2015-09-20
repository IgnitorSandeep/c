#include<stdio.h>
int main()
{
    char name[] = "SANDEEP";
    char *p;
    p = name;
    while(*p)
    {
        printf("%c",*p);
        p++;
    }

    return 0;
}
