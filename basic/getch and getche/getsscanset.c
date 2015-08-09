#include<stdio.h>
 int main()
 {
    char str[128];
    printf("Enter a String with spaces.\n");
    scanf("%[^\n]s",str);
    printf("You entered %s",str);

    return 0;
 }
