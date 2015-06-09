#include<stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        char author[20];
    };

    struct book os = {"Operating System",200,"Galvin"};
    struct book *ptr;
    ptr = &os;

    printf("%s\n",ptr->name);
    printf("%d\n",ptr->price);
    printf("%s\n",ptr->author);

    return 0;
}
