#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[]="123";
    int str2=123;
    //atoi
    if(str2==atoi(str1))
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
    //atof
     if(str2==atof(str1))
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }

    //atol
     if(str2==atol(str1))
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }
    //atol
     if(str2==atoll(str1))
    {
        printf("Equal\n");
    }
    else
    {
        printf("Unequal\n");
    }

    return 0;
}
