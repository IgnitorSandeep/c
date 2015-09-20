#include<stdio.h>
#include<string.h>

//Copy Source String to Destination String
void xstrcpy(char *source,char *dest)
{
    while(*source)
    {
        *dest=*source;
        dest++;
        source++;
    }
    *dest='\0';
}

int main()
{
    char str1[20]="Bamboo Flute";
    char str2[]="Dhamp";
    char str3[20];
    int l,k;

    l = strlen(str1);
    printf("length of str1 = %s\n",str1);

    xstrcpy(str2,str3);
    printf("After Copying, str3 = %s\n",str3);

    k=strcmp(str1,str2);
    printf("on comparing str1 & str2,k = %d \n",k);

    return 0;
}
