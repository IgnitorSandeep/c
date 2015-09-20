/**
Problem Description:
Memory Efficient Implementation of Two Stack using a single array.
*/

#include<stdio.h>

/*
Structure for two stack array.
*/
struct TwoStack
{
    int *arr;
    int size;
    int top1,top2;
};

/*
It creates and initialize the two stack array with given length.
*/
struct TwoStack* createTwoStack(int length)
{
    struct TwoStack *twoStack = (struct TwoStack*) malloc(sizeof(struct TwoStack));
    twoStack->size = length;
    twoStack->arr = (int *) malloc(twoStack->size * sizeof(int));
    twoStack->top1 = -1;
    twoStack->top2 = twoStack->size;

    return twoStack;
}

/*
push item into the stack1
*/
void push1(struct TwoStack *stack, int item)
{
    if(stack->top1 < stack->top2 -1 )
    {
        stack->arr[++stack->top1] = item;
    }
    else
    {
        printf("Stack Overflow !\n");
        exit(1);
    }
}

/*
push item into the stack2
*/
void push2(struct TwoStack *stack, int item)
{

    if(stack->top2 > stack->top1 + 1 )
    {
        stack->arr[--stack->top2] = item;
    }
    else
    {
        printf("Stack Overflow !\n");
        exit(2);
    }
}

/*
pop item from stack1
*/
int pop1(struct TwoStack *stack)
{
    if(stack->top1>-1)
    {
        return stack->arr[stack->top1--];
    }
    else
    {
        printf("Stack Underflow !\n ");
        exit(3);
    }
}

/*
pop item from stack2
*/
int pop2(struct TwoStack *stack)
{
    if(stack->top2 < stack->size)
    {
        return stack->arr[stack->top2++];
    }
    else
    {
        printf("Stack Underflow !\n");
        exit(4);
    }
}
/*
Driver program to test the two stack implementation.
*/
int main(void)
{
    struct TwoStack *stack = createTwoStack(10);

    push1(stack,10);
    push1(stack,20);
    push1(stack,30);

    push2(stack,70);
    push2(stack,80);
    push2(stack,90);

    int x = pop1(stack);
    if(x==30)
    {
        printf("Stack1 is working fine.\n");
    }
    else
    {
        printf("Value got is %d So Stack1 is not working properly.\n",x);
    }

    int y = pop2(stack);
    if(y==90)
    {
        printf("Stack2 is working fine.\n");
    }
    else
    {
        printf("Value got is %d So Stack2 is not working properly.\n",y);
    }
    return 0;
}
