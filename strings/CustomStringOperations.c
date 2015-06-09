#include<stdio.h>

/**
Return the length of the string.
eg. xstrlen("Sandeep")=7
*/
int xstrlen(char *s)
{
    int length=0;
    while(*s!='\0')
    {
        length++;
        s++;
    }
    return length;
}

/**
to copy the content of string s into string t
*/
void xstrcpy(char *t,char *s)
{
    while(*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
    return;
}

/**
this a function to perform strcat(char *t,char *s)
*/
void xstrcat(char *t,char *s)
{
    while(*t!='\0')
        t++;
    while(*s!='\0')
    {
        *t=*s;
        t++;
        s++;
    }
    *t=*s;
    return;
}

/**
comparing two strings are equality if equal return 0 or return non zero value in case of mismatch.
*/
int xstrcmp(char *s1,char *s2)
{
    while(*s1==*s2)
    {
        if(*s1=='\0')
            return (0);
        s1++;
        s2++;
    }
    return (*s1-*s2);
}

int main(void)
{
    char name[]="Sandeep ";
    char surname[]="Singh";
    char *cpname;
    int length = xstrlen(name);
    printf("length of string \"%s\" = %d \n",name,length);
    xstrcpy(cpname,name);
    printf("Copied String is %s.\n",cpname);
    xstrcat(name,surname);
    printf("After concatinating, Name is %s.\n",name);

    int isEqual =xstrcmp(name,surname);
    if(isEqual==0)
    {
        printf("Both the string are equal.\n");

    }
    else
    {
        printf("both the Strings are unequal\n");
    }
    return 0;
}
