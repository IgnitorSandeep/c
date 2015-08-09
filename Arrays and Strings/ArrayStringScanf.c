#include<stdio.h>
#include<string.h>
int main()
{
    char *name[6];
    int  i;
    char temp[20];
    char *tmp;
    for(i=0;i<6;i++)
    {
        printf("Enter Name : \t");
        scanf("%s",temp);
       // gets(tmp);
        name[i]=(char *)malloc(strlen(temp));
        strcpy(name[i],temp);
    }

    for(i=0;i<6;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
