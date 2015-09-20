#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0
int main()
{
    int i,a,flag,len;
    char name[6][10]={
                        "Sandeep",
                        "Sameer",
                        "Shivam",
                        "Sateesh",
                        "Saurabh",
                        "Jauhar"
                     };
    char yname[20];

    //Calculatin number of persons
    len = sizeof(name)/sizeof(name[0]);

    printf("Enter your name :\n");
    scanf("%s",&yname);

    flag = NOTFOUND;
    for(i=0;i<len;i++)
    {
        a = strcmp(&name[i][0],yname);
        if(a==0)
        {
            printf("Welcome Haramkhor!:P");
            flag = FOUND;
        }
    }

    if(flag==NOTFOUND)
    {
        printf("Sorry! you are not a treepasser.\n");
    }

    return 0;
}
