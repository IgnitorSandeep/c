#include<stdio.h>
#include<stdio.h>
void main()
{
    int i=0;
    char str[100],x ='x',y='y' ;
    printf("En ter the string\n:");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a')
        {
            printf("%c ",x);
            printf("%c ",str[i++] );
            printf("%c ",y);
        }
        else
        {
            printf("%c ",str[i++] );
        }
    }
    getch();
}
