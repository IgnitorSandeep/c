/**
Check for balanced parentheses in an expression
Using Linked list Stack.
*/
#include<stdio.h>
#include<stdlib.h>

//Stack node for linked list representation
struct StackNode
{
    int data;
    struct StackNode *next;
};

/* Function to push an item to stack */
void push(struct StackNode** topRef,int item)
{
    struct StackNode *newNode = (struct StackNode*)
                                             malloc(sizeof(struct StackNode));
    if(newNode == NULL )
        return;

    newNode->data = item;
    newNode->next = (*topRef);
    *topRef = newNode;
}

/* Function to pop an item from stack */
char pop(struct StackNode** topRef)
{
    int res;
    struct StackNode *top;
    if(*topRef == NULL)
    {
        printf("Stack Overflow!");
        exit(1);
    }
    else
    {
        top = *topRef;
        res =top->data;
        *topRef = top->next;
        free(top);
        top = NULL;
        return res;
    }
}

/* Return 1 if parentheses pair matches else 0 */
int isMatchingPair(char left,char right)
{
    if(left=='(' && right==')')
        return 1;
    else if(left=='{' && right=='}')
        return 1;
    else if(left=='[' && right==']')
        return 1;
    else
        return 0;
}

/* this function Check if expression is balance parentheses or not.*/
int checkBalance(char *expr)
{
    int isBalanced = 0;
    struct StackNode *sNode = NULL;
    int i= 0;

    while(expr[i])
    {
        if(expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            push(&sNode,expr[i]);
        }
        else if(expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            if(sNode==NULL)
               return 0;

            else if(!isMatchingPair(pop(&sNode),expr[i]))
               return 0;
        }

        i++;
    }

    if(sNode==NULL)
        isBalanced = 1;
    else
        isBalanced = 0;

    return isBalanced;
}

int main(void)
{
    //Example : Balanced
    //char expr[100]="()({})[]";

    //Example : Not Balanced
    //char expr[100]="()({fsdk kkds })[[[[[[}}}}}[]";

    char expr[100]=";
    int isBalanced = checkBalance(expr);
    if(isBalanced==1)
        printf("Balanced!\n");
    else
        printf("Not Balanced!\n");

    return 0;
}
