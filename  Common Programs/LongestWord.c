#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    int i,max=0,count=0,j;
    char str[100]; /* ={"INDIA IS DEMOCRATIC COUNTRY"}; u can use a string inside,in place of user input */
    printf("\nEnter the string\n:");
    gets(str);

    for(i=0;i<strlen(str);i++)
    {
        if(!(str[i]==32))
        {
            count++;
        }
        else
        {
            if(max<count)
            {
                j=i-count;
                max=count;
            }
            count=0;
        }
    }

    for(i=j;i<(j+max);i++)
        printf("%c",str[i]);

    getch();
}
