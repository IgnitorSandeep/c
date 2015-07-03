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

    while(current->next!=head) {
        current = current->next;
        length++;
    }

    return length;
}

void printList(struct CircularListNode *head) {
    struct CircularListNode *current = head;

    if(head==NULL)
        return;

    while(current->next!=head) {
        printf("%d",current->data);
        current = current->next;
    }
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

    while(current->next!=head)
        current = current->next;

    if(head==NULL) {
        head=newNode;
        return head;
    }
    else {
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

    while(current->next!=head) {
        current = current->next;
    }

    if(head == NULL) {
        head = newNode;
    }
    else {
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
        temp->next = current->next;
        free(current);
        current = NULL;
        return;
    }
}

int main(void) {
    struct CircularListNode *start = NULL;

    start = insertAtBegin(start,1);
    start = insertAtBegin(start,2);
    start = insertAtBegin(start,3);
    start = insertAtBegin(start,4);
    start = insertAtBegin(start,5);

    //Printing the circular list
    printList(start);

    return 0;
}
