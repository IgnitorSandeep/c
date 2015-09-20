#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char a[8];
    char *b="String";
    int length=strlen(b);
    for(i=0;i<length;i++)
    {
        a[i] = b[length-i];
    }
    printf("%s",a);

    return 0;
}
