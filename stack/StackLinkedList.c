#include<stdio.h>

struct StackNode
{
    int data;
    struct StackNode *next;
};

struct StackNode newNode(int data)
{
    struct StackNode *stackNode =(struct StackNode*)
                                  malloc(sizeof(struct StackNode));
    node->data = data;
    node->next = NULL;
    return stackNode;
}

int isEmpty(struct StackNode *root)
{
   return !root;
}

void push(struct StackNode **root,int data)
{

}

int main()
{


}
