#include<stdio.h>
int isCalindrome(char *str)
{
    int isCalindrome = 0;
    int length  = strlen(str);

    int i=0;
    if(length%6==0)
    {
        isCalindrome=1;
    }
    else
    {
        return (isCalindrome=0);
    }

    while(*(str+i)!='\0')
    {
        if(*(str+i) == *(str+length-(i+1) )&& *(str+i+1) == *(str+length-(i+2)) )
        {
            i = i+2;
        }
        else
        {
            isCalindrome = 0;
        }
    }
return isCalindrome;

}
int main(void)
{
    char *a = "abaabsa";
    printf("a is calindrome : %d",isCalindrome(a));

    return 0;
}
