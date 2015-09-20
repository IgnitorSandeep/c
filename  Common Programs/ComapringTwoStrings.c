#include<stdio.h>
int xstrcmp(char *str1,char *str2)
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

void xstrcat(char *str1, char *str2)
{

    while(*str1!='\0')
    {
        str1++;
    }

     while(*str2!='\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1= *str2;
}
int main()
{
    char *a = "hello";
    char *b = "hello";
    char *c = "sandeep";
    char *d = "dnk";

    printf("a = %s\n",a);
    printf("b = %s\n",b);
    printf("c = %s\n",c);
    printf("d = %s\n",d);

    printf("Difference between a and b : %3d\n",xstrcmp(a,b));
    printf("Difference between a and c : %3d\n",xstrcmp(a,c));
    printf("Difference between a and d : %3d\n",xstrcmp(a,d));

    printf("Before Concatination \n");
    printf("b = %s\n",b);
    printf("c = %s\n",c);
    xstrcat(b,c);

    printf("after Concatination \n");
    printf("b = %s\n",b);

    return 0;
}
