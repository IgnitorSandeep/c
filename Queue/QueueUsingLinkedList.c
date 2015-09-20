#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// Node structure for Queue
struct QueueNode
{
    int data;
    struct QueueNode *next;
};

// Structure for Queue Using Linked List
struct Queue
{
    struct QueueNode *front;
    struct QueueNode *rear;
};

// Creating a new Queue Node with given item
struct QueueNode* newQueueNode(int item)
{
    struct QueueNode *node = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    node->data = item;
    node->next = NULL;
    return node;
}

// Create a empty queue
struct Queue* createQueue()
{
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

// enqueue into the Queue
void enqueue(struct Queue *queue,int data)
{
    // creating a new node for Queue
    struct QueueNode *newNode = newQueueNode(data);

    // If queue is empty, then new node itself will be front and rear
    if(queue->rear == NULL)
    {
        queue->front = queue->rear = newNode;
        printf("%d enqueued to queue \n",queue->rear->data);
        return;
    }

    // Add a new node to the Queue and making newly node to rear of queue
    queue->rear->next = newNode;
    queue->rear = newNode;
    printf("%d enqueued to queue \n",queue->rear->data);
}


// dequeue element from the Queue
struct QueueNode* dequeue(struct Queue *queue)
{
    if(queue->front == NULL )
    {
        printf("Queue is Empty!\n");
        return NULL;
    }


    // storing the front Node of queue and moving front to next node
    struct QueueNode *node = queue->front;
    queue->front = queue->front->next;

    // if Queue becomes empty then make rear as NULL
    if(queue->front == NULL)
        queue->rear = NULL;

    return node;
}

int main(void)
{
    struct Queue *queue = createQueue();
    enqueue(queue,1);
    enqueue(queue,2);
    enqueue(queue,3);
    enqueue(queue,4);
    enqueue(queue,5);

    struct QueueNode *node = dequeue(queue);
    if(node != NULL )
        printf("%d dequeue\n",node->data);

    node = dequeue(queue);
    if(node != NULL)
        printf("%d dequeue\n",node->data);

    node = dequeue(queue);
    if(node != NULL)
        printf("%d dequeue\n",node->data);

    node = dequeue(queue);
    if(node != NULL)
        printf("%d dequeue\n",node->data);node = dequeue(queue);

    if(node != NULL)
        printf("%d dequeue\n",node->data);

    node = dequeue(queue);
    if(node != NULL)
        printf("%d dequeue\n",node->data);

    node = dequeue(queue);
    if(node != NULL)
        printf("%d dequeue\n",node->data);

    node = dequeue(queue);
    if(node != NULL)
        printf("%d dequeue\n",node->data);

    return 0;
}
