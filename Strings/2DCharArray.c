#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0
int main(void)
{
    char memberlist[6][10]={
                                "akshay",
                                "parag",
                                "mishra",
                                "sandeep",
                                "sateesh",
                                "abhisek"
                            };
    int i,flag,a;
    char yourname[20];
    printf("Enter your name\n");
    scanf("%s",yourname);

    flag=NOTFOUND;
    for(i=0;i<=5;i++)
    {
        a = strcmp(&memberlist[i][0],yourname);
        if(a==0)
        {
            printf("Welcome! your name is in the member list.\n");
            flag = FOUND;
            return flag;
        }
    }
    if(flag==NOTFOUND)
    {
        printf("Your name is not in the list.\n");
    }

    return 0;
}
