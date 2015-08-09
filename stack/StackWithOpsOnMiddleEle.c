#include<stdio.h>
#include<stdlib.h>

/* structure for stack Node */
struct DLLNode
{
    struct DLLNode *prev;
    int data;
    struct DLLNode *next;
};

/* structure for stack */
struct myStack
{
    //tos -- top of stack
    struct DLLNode *tos;

    // this will keep track of the mid pointer
    struct DLLNode *mid;

    //it  will help in which value should be return as middle
    int count;
};

/* creating a stack and returning it. */
struct myStack *createStack()
{
   struct myStack *stack = (struct myStack*) malloc(sizeof(struct myStack));
   stack->count = 0;
   return stack;
}

/* pushing a new node to the stack */
void push(struct myStack *ms,int item)
{
    struct DLLNode *newNode = (struct DLLNode*) malloc(sizeof(struct DLLNode));
    newNode->data = item;
    newNode->prev = NULL;
    newNode->next = ms->tos;
    ms->count+=1;

    // change mid pointer in two cases
    // 1. In case list is empty
    if(ms->count == 1)
    {
       ms->mid = newNode;
    }
    else
    {
        ms->tos->prev = newNode;
        if(ms->count & 1)
        {
            ms->mid = ms->mid->prev;
        }
    }
    // 2. move head to point the newly inserted node
    ms->tos = newNode;
}

/* pop an element from stack */
int pop(struct myStack *ms)
{
    //checking stack empty condition
    if(ms->count == 0)
    {
        printf("Stack is empty.\n");
        return -1;
    }

    struct DLLNode *topElement = ms->tos;
    int item = topElement->data;
    ms->tos = topElement->next;

    if(ms->tos!=NULL)
        ms->tos->prev = NULL;
    ms->count -= 1;
    //If count goes to even then make mid as next element in the stack
    if(!(ms->count & 1))
    {
        ms->mid = ms->mid->next;
    }
    free(topElement);
    return item;

}

/* finding middle into the stack */
int findMiddle(struct myStack *ms)
{

    if(ms==NULL)
    {
        printf("Stack is empty!.");
        return -1;
    }

    return ms->mid->data;
}


int main(void)
{
    struct myStack *ms = createStack();
    push(ms,10);
    push(ms,20);
    push(ms,30);
    push(ms,40);
    push(ms,50);
    push(ms,60);
    push(ms,70);

    printf("Item popped is %d\n", pop(ms));
    printf("Item popped is %d\n", pop(ms));
    printf("Middle Element is %d\n", findMiddle(ms));

    return 0;
}
