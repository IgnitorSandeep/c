#include<stdio.h>
#include<stdlib.h>

struct DoublyListNode {
    int data;
    struct DoublyListNode *prev;
    struct DoublyListNode *next;
};

struct DoublyListNode* insertAtBegin(struct DoublyListNode *head,int data) {

    struct DoublyListNode *current = head;
    struct DoublyListNode *newNode = (struct DoublyListNode*)malloc(sizeof(struct DoublyListNode));
    newNode->data = data;
    newNode->prev = NULL;

    if(head == NULL) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
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

    return 0;
}

