#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main(){
    struct node *start;
    start = NULL;
    printf("%u\n",start);
    printf("Number of elements in the linked list is %d.\n",count(start));
    append(&start,5);
    printf("%u\n",start);
    return 0;
}

void append(struct node **start,int num)
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = num;
    temp->link = NULL;
    if(*start==NULL)
    {
        start = temp;
        printf("%u\n",start);
    }
}

int count(struct node *p)
{
    int count = 0;
    if(p==NULL)
    {
        return (count=0);
    }
    else
    {
        while(p!=NULL)
        {
            count++;
            p =p->link;

        }
    }

    return count;

}
