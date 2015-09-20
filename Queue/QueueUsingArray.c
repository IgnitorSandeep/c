#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

//Structure for Queue using array
struct Queue
{
    int front;
    int rear;
    int size;
    int *array;
    unsigned capacity;
};

//Create new Queue
struct Queue* createQueue(unsigned capacity)
{
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->size = 0;
    queue->front = 0;
    queue->rear = - 1;
    queue->array = (int *)malloc(capacity * sizeof(int));
    return queue;
}

//Return 1 if queue is full
int isFull(struct Queue *queue)
{
    return queue->size == queue->capacity;
}

//Return 1 if queue is empty
int isEmpty(struct Queue *queue)
{
    return queue->size == 0;
}

// performs enqueue operation to queue
void enqueue(struct Queue *queue,int item)
{
    if(isFull(queue))
    {
        printf("Queue is Full!\n");
    }
    queue->rear = (queue->rear+1)%queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueue to the queue. \n",item);
}

// performs dequeue operation at queue
int dequeue(struct Queue *queue)
{
    if(isEmpty(queue)){
        printf("Queue is Empty!.\n");
        return -1;
    }

    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    printf("%d dequeue from queue. \n",item);
    return item;
}

// return the front element in the queue
int front(struct Queue *queue)
{
    if(isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}

// return the rear element in the queue
int rear(struct Queue *queue)
{
    if(isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}

//Driver to test the above program
int main(void)
{
    struct Queue *queue = createQueue(5);

    //enqueue elements to the queue
    enqueue(queue,1);
     enqueue(queue,2);
      enqueue(queue,3);
       enqueue(queue,4);
        enqueue(queue,5);
         enqueue(queue,6);

    printf("Front of the queue is %d. \n",queue->front);

    //dequeue elements from the queue
    dequeue(queue);
     dequeue(queue);
      dequeue(queue);
       dequeue(queue);
        dequeue(queue);
         dequeue(queue);

    return 0;
}
