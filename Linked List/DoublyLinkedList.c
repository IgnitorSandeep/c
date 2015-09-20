#include<stdio.h>
#include<stdlib.h>

struct DoublyListNode {
    int data;
    struct DoublyListNode *prev;
    struct DoublyListNode *next;
};


/**
Doubly linked list node
*/
struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;

};


/**
Insert a node in sorted doubly linked list
*/
struct dnode* SortedInsert(struct dnode *head,int data)
{
    struct dnode *temp,*current;
    temp=(struct dnode*)malloc(sizeof(struct dnode));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;

    if(head==NULL)
    {
        head=temp;
        //printf("%d",head->data);
        return head;
    }
    if(temp->data<=head->data)
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
        return head;
    }
    current=head;
    while(current->next!=NULL)
    {
       if(temp->data<=current->data)
       {
           current->prev->next =temp;
           temp->next = current;
           temp->prev = current->prev;
           current->prev = temp;
           return head;
       }
       current = current->next;
    }
    if(temp->data<=current->data)
    {
       current->prev->next=temp;
       temp->next=current;
       temp->prev=current->prev;
       current->prev=temp;
       return head;
    }
    current->next=temp;
    temp->prev=current;

    return head;
}

/**
To reverse a doubly linked
*/
struct dnode* reverseDoublyList(struct dnode *head)
{
    struct dnode *p,*q,*r;
    p=q=NULL;
    r=head;
    if(r==NULL||r->next==NULL)
    {
        return head;
    }

    while(r->next!=NULL)
    {
        p=q;
        q=r;

        r=r->next;
        q->prev = q->next;
        q->next = p;

    }
    //last node
    if(r->next==NULL)
    {
        r->next=r->prev;
        r->prev=NULL;
        head = r;
        return head;
    }
    return head;
}

/**
To print all nodes of the doubly linked list
*/
void printDoublyList(struct dnode *head)
{
    while(head!=NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }
}


struct DoublyListNode* insertAtBegin(struct DoublyListNode *head,int data) {

    struct DoublyListNode *current = head;
    struct DoublyListNode *newNode = (struct DoublyListNode*)malloc(sizeof(struct DoublyListNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;


    if(head == NULL) {
        head = newNode;

         return head;
    }
    else {
         head ->prev =newNode;
         head = newNode;

         return head;
    }




}

struct DoublyListNode* insertAtEnd(struct DoublyListNode *head,int data) {

    struct DoublyListNode *current = head;
    struct DoublyListNode *newNode = (struct DoublyListNode*)malloc(sizeof(struct DoublyListNode));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL) {
        head = newNode;
    }
    else {
        while(current->next!=NULL) {
            current = current->next;
        }
        if(current->next==NULL){
            current->next = newNode;
            newNode->prev = current;
        }
    }
    return head;
}

struct DoublyListNode* insertAtPosition(struct DoublyListNode *head,int data,int position) {
    struct DoublyListNode *current = head;
    struct DoublyListNode *newNode = (struct DoublyListNode*) malloc(sizeof(struct DoublyListNode));
    newNode->data = data;
    int k=0;

    while(current->next!=NULL&&k<position-2) {
        current = current->next;
        k++;
    }
    if(current!=NULL&&k==position-2) {
        newNode->next = current->next;
        newNode->prev = current;
        current->next = newNode;
        if(current->next!=NULL) {
            current->next->prev = newNode;
        }
    }
    return head;
}

struct DoublyListNode* deleteFromFirst(struct DoublyListNode *head) {
    struct DoublyListNode *temp = head;
    if(head==NULL) {
        printf("Nothing to delete.");
        return head;
    }
    else {
        head=head->next;
        head->prev=NULL;
        free(temp);
        temp = NULL;
    }

    return head;
}


struct DoublyListNode* deleteFromLast(struct DoublyListNode *head) {
    struct DoublyListNode *current = head;
    if(head==NULL) {
        printf("Nothing to delete.");
        return head;
    }
    else {
        while(current->next!=NULL)
            current = current->next;
        if(current->next == NULL ) {
            current->prev->next =NULL;
            current->prev = NULL;
            free(current);
            current = NULL;
        }
    }

    return head;
}


struct DoublyListNode* deleteAtPosition(struct DoublyListNode *head,int position) {
    struct DoublyListNode *current = head;
    int k =0;
    if(head==NULL) {
        printf("Nothing to delete.");
        return head;
    }
    else {

        while(current!=NULL && current->next!=NULL && k <position-1){
            current = current->next;
            k++;
        }

        if(current!=NULL && current->next !=NULL && k==position-1 ) {

            current->prev->next = current->next;
            current->next->prev = current->prev;
            free(current);
            current = NULL;
        }
    }

    return head;
}

void printList(struct DoublyListNode *list) {
    printf("NULL");
    if(list==NULL) {
        printf("\n");
        return;
    }
    else {
        while(list!=NULL) {
            printf("<-%d->",list->data);
            list = list->next;
        }
        printf("NULL\n");

    }
}

int getCount(struct DoublyListNode *head) {
    int count = 0;
    if(head==NULL) {
        return 0;
    }
    else {
        while(head!=NULL) {
            count = count +1;
            head = head->next;
        }
    }
    return count;
}

int main(void) {
    struct DoublyListNode *head = NULL;
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));

    printf("After inserting 5,4,3,2,1 at Begin.\n");
    head = insertAtBegin(head,5);
    head = insertAtBegin(head,4);
    head = insertAtBegin(head,3);
    head = insertAtBegin(head,2);
    head = insertAtBegin(head,1);
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));

    printf("After inserting 4,3,2,1 at End.\n");
    head = insertAtEnd(head,4);
    head = insertAtEnd(head,3);
    head = insertAtEnd(head,2);
    head = insertAtEnd(head,1);
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));

    head = insertAtPosition(head,6,6);
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));

    head = deleteFromFirst(head);
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));

    head = deleteFromLast(head);
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));

    head = deleteAtPosition(head,4);
    printList(head);
    printf("Length of the list is %d.\n",getCount(head));


    //Inserting into a doubly linked list
    struct dnode *dlist=NULL;
    int arr3[]={2,4,5,6,6,7,9};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    int l;
    for(l=0;l<size3;l++)
    {
        dlist=SortedInsert(dlist,arr3[l]);
    }
    printf("\nDoubly Linked List contains :\n");
    printDoublyList(dlist);
    printf("\n\n");

    //Reversing the doubly linked list
    struct dnode *reverseDoubleList=NULL;
    reverseDoubleList=reverseDoublyList(dlist);
    printf("\nReverse of Doubly Linked List contains :\n");
    printDoublyList(reverseDoubleList);
    printf("\n\n");



    return 0;
}
