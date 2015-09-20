#include<stdio.h>
int isPalindrome(char *str)
{
    int isPalindrome = 0;
    char *start = str;
    int length = strlen(str);
    char *end=str+length-1;
    int i;
    for(i=0;i<length/2;i++)
    {
        if(*start==*end)
        {
            if(i==(length/2-1))
                isPalindrome = 1;
            printf("Start = %c & end  = %c\n",*start,*end);
            start++;
            end--;
        }
        else
        {
          isPalindrome= 0;
        }
    }
    return isPalindrome;
}
int main()
{
    char *a  ="ohello";
    char *b  ="alaala";
    printf("\"ohello\" is palindrome : %d\n",isPalindrome(a));
    printf("\"alaala\" is palindrome : %d\n",isPalindrome(b));

    return 0;
}
