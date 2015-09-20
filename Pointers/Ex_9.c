#include<stdio.h>
#include<string.h>
int main(void)
{
    //"String" is a String constant its values cant be change.
    char *b="String";

    printf("value of pointer b = %d\n\n",b);
    printf("size of pointer b = %d\n\n",sizeof(b));
    printf("size of \"string\" literal = %d\n\n",sizeof("String"));
    printf("length of \"string\" literal = %d\n\n",strlen("String"));

    printf("Address at b+0 is = %d\n",b);
    printf("String at b+0 is = %s\n\n",b);

    printf("Address at b+1 is = %d\n",b+1);
    printf("String at b+1 is = %s\n\n",b+1);

    printf("Address at b+2 is = %d\n",b+2);
    printf("String at b+2 is = %s\n\n",b+2);

    printf("Address at b+3 is = %d\n",b+3);
    printf("String at b+3 is = %s\n\n",b+3);

    printf("Address at b+4 is = %d\n",b+4);
    printf("String at b+4 is = %s\n\n",b+4);

    printf("Address at b+5 is = %d\n",b+5);
    printf("String at b+5 is = %s\n\n",b+5);

    printf("Address at b+6 is = %d\n",b+6);
    printf("String at b+6 is = %s\n\n",b+6);

    //
    //Changing 'r' character with 's'
    *(b+2)='s';

    printf("String at b is = %s\n\n",b);
    return 0;
}

