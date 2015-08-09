#include<stdio.h>
#include <stdlib.h>
#include <limits.h>
//stack definition
struct Stack
{
    int capacity;
    int top;
    int *array;
};

/*
create a stack
*/
struct Stack* createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(sizeof(int)*stack->capacity);
    return stack;
}

/*
check for stack is full or not.
*/
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity;
}

/*
check for stack is empty or not.
*/
int isEmpty(struct Stack *stack)
{
    return stack->top ==-1;
}

/*
PUSH an element to stack
*/
void push(struct Stack *stack,int data)
{
    if(isFull(stack))
    {
        return;
    }
    stack->array[++stack->top] = data;
    printf("%d pushed to stack\n",data);
}

/*
POP an element to stack
*/
int pop(struct Stack *stack)
{
    if(isEmpty(stack))
    {
        return INT_MIN;
    }

    return stack->array[stack->top--];
}


/*
PEEK an element to stack
*/
int peek(struct Stack *stack)
{
  if(isEmpty(stack))
    {
        return INT_MIN;
    }

    return stack->array[stack->top];
}

int main()
{

    struct Stack *stack =createStack(5);
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("%d popped from stack\n", pop(stack));

    printf("Top item is %d\n", peek(stack));

}
