#include<stdio.h>
struct book
{

    char name[20];
    char author[20];
    int price;
};
int main()
{
    void display(struct book*);
    struct book b1 = {"Computer Networks","Sandeep Singh", 303};
    display(&b1);
    return 0;
}

void display(struct book *b)
{
    printf("%s \n %s \n %d \n",b->name,b->author,b->price);
    return;
}
