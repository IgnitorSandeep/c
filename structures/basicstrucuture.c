#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct list_el {
    unsigned int data;
    char name[16];
    char grade;
    struct list_el * next;
};

typedef struct list_el item;

int main(int argc, char **argv) {
    item *curr, *head;
    curr = malloc(sizeof(*curr));
    //first item
    curr->data = 3141592;
    strcpy(curr->name, "Carl");
    curr->grade = 'A';
    curr->next = head;
    head = curr;
}
