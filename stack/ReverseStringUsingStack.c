#include<stdio.h>

struct Stack
{
    unsigned capacity;
    int top;
    char *array;

};

/* to create a char stack with specified length */
struct Stack* createStack(int capacity)
{
    struct Stack *charStack= (struct Stack*)malloc(sizeof(struct Stack));
    charStack->capacity = capacity;
    charStack->top = -1;
    charStack->array = (char *)malloc( charStack->capacity * sizeof(char) );

    return charStack;
}

/* Check whether stack has space or not */
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity -1;
}

/* Check whether stack has space or not */
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}

/* to push a character in stack */
void push(struct Stack *stack, char ch)
{
    if(isFull(stack))
        return;
    stack->array[++stack->top] = ch;

}

/* to perform a pop operation from stack */
char pop(struct Stack *stack)
{
    if(isEmpty(stack))
        return;
    return stack->array[stack->top--];

}

/* to reverse a string */
void reverse(char str[])
{
    int len = strlen(str);
    struct Stack *strStack = createStack(len);

    // push all character of string into stack
    int i;
    for(i=0;i<len;i++)
    {
        push(strStack,str[i]);
    }

    // pop all characters from the stack
    for(i=0;i<len;i++)
    {
        str[i] = pop(strStack);
    }
}

int main(void)
{
    char str[] = "sandeep";
    printf("Before Reverse : %s \n",str);
    reverse(str);
    printf("After Reverse : %s \n",str);

    return 0;
}
