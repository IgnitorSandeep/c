#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include <string.h>

//defining macros for easy implementation
#define boolean int
#define true 1
#define false 0

// Structure for Queue Node
struct QueueNode
{
    //for holding a String of 0 and 1
    char *str;
    // holds the next pointer address
    struct QueueNode *next;
};

// Structure for Queue
struct Queue
{
    // front of the Queue
    struct QueueNode *front;
    // rear of the Queue
    struct QueueNode *rear;
};

// Creating a queue and initializing it
struct Queue* createQueue()
{
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;

    return queue;
}

// Creating a new node for Queue with given string
struct QueueNode* createNewNode(char *s)
{
    struct QueueNode *node = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    node->str = s;
    node->next = NULL;

    return node;
}

// Pushing a string to the Queue
void push(struct Queue *queue, char *str)
{
    struct QueueNode *newNode = createNewNode(str);
    if(queue->rear == NULL)
    {
        queue->front = queue->rear = newNode;
        return;
    }

    queue->rear->next = newNode;
    queue->rear = newNode;

}

//getting the front of the queue
struct QueueNode* front(struct Queue *queue)
{
    if(queue == NULL )
        return NULL;
    else
        return queue->front;
}

// Poll a string from the Queue
struct QueueNode* poll(struct Queue *queue)
{
    if(queue->front == NULL )
    {
        printf("Queue is Empty!\n");
        return false;
    }

    // Holding the queue front and moving front to next of it.
    struct QueueNode *temp = queue->front;
    queue->front = queue->front->next;

    // To handle if queue becomes after final pop
    if(queue->front == NULL)
        queue->rear = NULL;

    return temp;
}

// Takes two string pointers return a char pointer to concatenated result
char* xstrcat(char *str1,char *str2)
{
    char *temp = (char *)malloc((strlen(str1)+strlen(str2)+1)*sizeof(char));
    int i = 0;
    while(i<strlen(str1))
    {
        temp[i]=str1[i];
        i++;
    }

    int len=strlen(str1);
    while(i<strlen(str1)+strlen(str2))
    {
        temp[i] =str2[i-len];
        i++;
    }

    temp[i]='\0';

    return temp;

}

// print binary representation of 1 to n numbers
void printBinaryNumbers(int n)
{
    struct Queue *queue = createQueue();
    push(queue,"1");

    while(n--)
    {
        char *s = poll(queue)->str;
        printf("%s \n",s);

        char *s1 = s;

        push(queue,xstrcat(s,"0"));
        push(queue,xstrcat(s1,"1"));

    }
}

boolean main(void)
{
    int n =10;
    printBinaryNumbers(10);

    return false;
}
