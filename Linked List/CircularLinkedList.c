#include<stdio.h>
#include<stdlib.h>

struct CircularListNode {
    int data;
    struct CircularListNode *next;
};

int circularListLength(struct CircularListNode *head) {
    int length = 0;
    struct CircularListNode *current = head;

    if(current==NULL) {
        return 0;
    }
    do {
        current = current->next;
        length++;
    }
    while(current!=head);

    return length;
}

void printList(struct CircularListNode *head) {
    struct CircularListNode *current = head;

    if(head==NULL) {
        printf("NULL\n");
        return;
    }

    printf("head->");
    do {
        printf("%d->",current->data);
        current = current->next;
    }
    while(current!=head);
    printf("head\n");
}

struct CircularListNode* insertAtEnd(struct CircularListNode *head,int data) {
    struct CircularListNode *current = head;
    struct CircularListNode *newNode = (struct CircularListNode*) malloc(sizeof(struct CircularListNode));

    if(newNode == NULL) {
        printf("Memory Error");
        return;
    }

    newNode->data = data;
    newNode->next = newNode;



    if(head==NULL) {
        head=newNode;
        return head;
    }
    else {
        while(current->next!=head)
            current = current->next;

        newNode->next = head;
        current->next = newNode;
        return head;
    }
}

struct CircularListNode* insertAtBegin(struct CircularListNode *head, int data) {
    struct CircularListNode *current = head;
    struct CircularListNode *newNode = (struct CircularListNode*) malloc(sizeof(struct CircularListNode));

    if(newNode==NULL) {
        printf("Memory Error");
        return;
    }

    newNode->data = data;
    newNode->next = newNode;

    if(head == NULL) {
        head = newNode;
    }
    else {

        while(current->next!=head)
            current = current->next;

        newNode->next = head;
        current->next = newNode;
        head = newNode;
    }
    return head;
}

struct CircularListNode* deleteLastNode(struct CircularListNode *head) {
    struct CircularListNode *current = head;
    struct CircularListNode *temp;

    if(current ==  NULL) {
        printf("List is empty.");
        return;
    }

    while(current->next!=head) {
        temp = current;
        current = current->next;
    }

    if(current->next==head) {
        //printf("[DEBUG] Current Next is Head\n");
        temp->next = current->next;
        free(current);
        current = NULL;
        return head;
    }
}

struct CircularListNode* deleteFirstNode(struct CircularListNode *head) {
    struct CircularListNode *current = head;
    struct CircularListNode *temp;

    if(current ==  NULL) {
        printf("List is empty.");
        return;
    }

    while(current->next!=head) {
        //temp = current;
        current = current->next;
    }

    if(current->next==head) {
        //printf("[DEBUG] Current Next is Head\n");
        current->next = head->next;
        free(head);
        head = current->next;
        return head;
    }
}

int main(void) {
    struct CircularListNode *start = NULL;

    printList(start);
    printf("Current List Length : %d\n",circularListLength(start));

    start = insertAtBegin(start,1);
    start = insertAtBegin(start,2);
    start = insertAtBegin(start,3);
    start = insertAtBegin(start,4);
    start = insertAtBegin(start,5);

    printf("\n");
    printf("After inserting 1, 2, 3, 4, 5 at begin.\n");
    printList(start);
    printf("Current List Length : %d\n",circularListLength(start));

    start = insertAtEnd(start,2);
    start = insertAtEnd(start,3);
    start = insertAtEnd(start,4);
    start = insertAtEnd(start,5);

    printf("\n");
    printf("After inserting 2, 3, 4, 5 at end.\n");
    printList(start);
    printf("Current List Length : %d\n",circularListLength(start));

    printf("\n");
    printf("After Last Node Deletion.\n");
    start = deleteLastNode(start);
    printList(start);
    printf("Current List Length : %d\n",circularListLength(start));

    printf("\n");
    printf("After First Node Deletion.\n");
    start = deleteFirstNode(start);
    printList(start);
    printf("Current List Length : %d\n",circularListLength(start));


    return 0;
}
