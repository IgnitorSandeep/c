#include<stdio.h>
#include<stdlib.h>

/* structure of a stack node */
struct StackNode
{
    char data;
    struct StackNode *next;
};

/* to push a char into stack */
void push(struct StackNode **topOfStack,char item)
{
    // Creating a stack Node to insert at top of stack
    struct StackNode *newNode = (struct StackNode*) malloc(sizeof(struct StackNode));

    // Checking if newNode is NULL Then no memory allocate for the new stack node.
    if(newNode == NULL)
    {
        printf("Stack Overflow!.");
        getchar();
        exit(0);
    }
    // Adding a new item into Stack Node
    newNode->data = item;
    newNode->next = (*topOfStack);

    // Making newly create node as top of stack
    (*topOfStack) = newNode;
}

/* Pop a character from top of the stack */
char pop(struct StackNode **topOfStack)
{
    // Storing top of the stack
    struct StackNode *top = *topOfStack;

    // If TOS is not null then return the item at TOP and make the TOS as next to TOS
    // Free the Older node which was TOS.
    if(top!=NULL)
    {
      char item = top->data;
      (*topOfStack) = top->next;
      free(top);
      top = NULL;
      return item;
    }
    else
    {
        printf("Stack Empty!\n");
        getchar();
        exit(0);
    }
}


/* to check whether stack is empty or not */
int isEmpty(struct StackNode **topOfStack )
{
    if((*topOfStack)!=NULL)
        return 0;
    else
        return 1;
}

/* to print the linked list */
void print(struct StackNode *top)
{
    printf("\n");
    while(top!=NULL)
    {
        printf("%d ",top->data);
        top = top->next;
    }
}

void reverse(struct StackNode **topOfStack)
{
    if((*topOfStack) == NULL)
        return;
    else
    {
        char item = pop(topOfStack);
        reverse(topOfStack);
        push(topOfStack,item);
    }
}

int main(void)
{

    struct StackNode *stack = NULL;
    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    push(&stack,4);

    print(stack);

    reverse(&stack);

    print(stack);
    return 0;
}
