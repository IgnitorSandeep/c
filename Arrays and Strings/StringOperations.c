#include<stdio.h>
#include<string.h>
int main(void)
{
    char str1[20]="Sandeep";
    char str2[]=" Singh";
    char str3[20];
    int l,k;

    l=strlen(str1);
    printf("Length of the string = %d\n",l);

    strcpy(str3,str1);
    printf("after copying into, string str3 = %s\n",str3);

    k=strcmp(str1,str2);
    printf("on comparing string str1 and str2,k=%d\n",k);

    k=strcmp(str3,str1);
    printf("on comparing strings str3 and str1,k=%d\n",k);

    strcat(str1,str2);
    printf("on concatenation strings str1=%s\n",str1);

    return 0;
}
