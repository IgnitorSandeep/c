#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};



struct node* secondLastNodeAddr(struct node *s)
{

    struct node *p;

    if(s==NULL)
    {
        printf("Linked List is empty.\n");
    }
    if(s->next==NULL)
    {
        printf("Linked List has single element.\n");
    }
    while(s->next!=NULL)
    {
        p=s;
        s=s->next;
    }
    return p;
}

int main(void)
{
    //static way of creating linked list
    struct node a={10,NULL};
    struct node b={20,NULL};
    struct node c={30,NULL};
    struct node d={40,NULL};
    a.next = &b;
    b.next = &c;
    c.next = &d;
    struct node *p,*q;
    struct node *s = &a;
    q=s;
    printf("Linked list:\n\n");
    while(q!=NULL)
    {
        printf("%d --> ",(*q).data);
        q=(*q).next;
    }
    printf("NULL\n");

    //fetching second last node data
    p = secondLastNodeAddr(s);
    printf("\n\n2nd last element : %d.\n",p->data);

    return 0;

}
