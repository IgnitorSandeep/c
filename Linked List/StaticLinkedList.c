#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};


//Return the address of second last node
//Using temp variable
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

//Return the address of second last node
//without using temp variable
struct node* secondLastNodeAddr2(struct node *s)
{

    if(s==NULL)
    {
        printf("Linked List is empty.\n");
        return s;
    }
    if(s->next==NULL)
    {
        printf("Linked List has single element.\n");
        return s;
    }
    while(s->next->next!=NULL)
    {
        s=s->next;
    }
    return s;
}

struct node* findMiddle(struct node *s)
{
    struct node *sp,*fp;
    sp=fp=s;
    if(fp==NULL)
    {
        printf("linked list is empty.");
        return fp;
    }
    if(fp->next==NULL)
    {
         printf("linked list has only one element.");
         return fp;
    }
    while(fp->next!=NULL&&fp->next->next!=null)
    {
        sp=sp->next;
        fp=fp->next->next;
    }

    return sp;
}
//return address of the node which contain data x.
struct node* findElementX(struct node *s,int x)
{
    if(s==NULL)
    {
        printf("Linked list is empty.\n");
        return s;
    }
    while(s->data!=x&&s->next!=NULL)
    {
        s=s->next;

    }
    if(s->data==x)
    {
       return s;
       return s;
    }
    else
    {
          printf("data not present in the list.\n");
    }

};

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

    //fetching second last node data
    p = secondLastNodeAddr2(s);
    printf("\n\n2nd last element : %d.\n",p->data);

    //fetching second last node data
    p = findElementX(s,40);
    printf("\n\n Address of node with data 40 is %u.\n",p);
    printf("\n\n data is %d.\n",p->data);


    return 0;

}
