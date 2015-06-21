#include<stdio.h>
#include<stdlib.h>
#define MAX_NODE 20
static int visited[MAX_NODE];

struct AdjListNode
{
    int dest;
    struct AdjListNode *next;
};

struct AdjList
{
    struct AdjListNode *adjListNode;
};

struct Graph
{
    int vertices;
    struct AdjList *adjListArray;

};

struct AdjListNode* createAdjListNode(int dest)
{
    struct AdjListNode *node = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    node->dest = dest;
    node->next = NULL;
    return node;
}

struct Graph* createGraph(int vertices)
{
    /**
    Graph create and initilize with its size
    */
    struct Graph *graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = vertices;

    /**
    adj list array of each vertices
    */
    graph->adjListArray = (struct AdjList*) malloc(vertices*sizeof(struct AdjListNode));

    /**
    initialize adjacency list with null
    */
    int i;
    for(i=0;i<vertices;i++)
    {
        graph->adjListArray[i].adjListNode = NULL;
    }

    return graph;
}

void addEdge(struct Graph *graph,int src,int dest)
{
    /**
    Create a new adj list node which will create a edge from src to dest.
    */
    struct AdjListNode *node = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    node->dest = dest;
    node->next = graph->adjListArray[src].adjListNode;
    graph->adjListArray[src].adjListNode = node;

    /**
    Create a new adj list node which will create a edge from dest to src.
    */
    node = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    node->dest = src;
    node->next = graph->adjListArray[dest].adjListNode;
    graph->adjListArray[dest].adjListNode = node;
}

/**
Creating queue
*/
struct QNode
{
    int key;
    struct QNode *next;
};

//creating a Queue Node with a given  key
struct QNode *createQueueNode(int key)
{
    struct QNode *qnode = (struct QNode*)malloc(sizeof(struct QNode));
    qnode->key = key;
    qnode->next = NULL;
    return qnode;
}

struct Queue
{
    struct QNode *front,*rear;
};

//creating a queue and intializing fron and rear with NULL
struct Queue *createQueue()
{
    struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

//enqueue an element to queue
void enQueue(struct Queue *queue,int key)
{
    struct QNode *qnode = createQueueNode(key);
    if(queue->rear==NULL)
    {
        queue->front = queue->rear = qnode;
        return;
    }
    queue->rear->next = qnode;
    queue->rear = qnode;
    return;

}
//dequeue an element from queue
struct QNode *deQueue(struct Queue *queue)
{
    if(queue->front==NULL)
        return NULL;

    struct QNode *temp = queue->front;
    queue->front = queue->front->next;
    if(queue->front == NULL)
        queue->rear = NULL;

    return temp;
}

int isQueueEmpty(struct Queue *queue)
{
    if(queue->front==NULL)
        return 1;
    else
        return 0;
}

struct QNode *queueFront(struct Queue *queue)
{
    return queue->front;
}

struct Queue *queue =NULL;
//BFS Implementation
void bfs(struct Graph *graph,int key)
{
    //initializing visited array to 0
    int i;
    for(i=0;i<MAX_NODE;i++)
        visited[i] = 0;

    queue = createQueue();


    enQueue(queue,key);
    printf("%d ",key);
    visited[key] = 1;

    struct QNode *qnode = NULL;
    while(isQueueEmpty(queue))
    {
        qnode = queueFront(queue);
        printf("%d ",qnode->key);
        deQueue(queue);

        struct AdjListNode *node = graph->adjListArray[qnode->key].adjListNode;
        while(node->next!=NULL)
        {
            if(visited[node->dest])
            {
                visited[node->dest] = 1;
                enQueue(queue,node->dest);
            }
            node=node->next;
        }
    }

}

struct QNode *rear(struct Queue *queue)
{
    return queue->rear;
}

void printGraph(struct Graph* graph)
{
    int v;
    for(v=0;v<graph->vertices;v++)
    {
        struct AdjListNode* adjNode = graph->adjListArray[v].adjListNode;
        printf("\nAdjacency List for vertex %d \nhead ",v);
        while(adjNode)
        {
            printf("-> %d",adjNode->dest);
            adjNode = adjNode->next;
        }

    }
}
int main(void)
{
/**
    printf("+++++++++++++   Testing Queue is working or not  ++++++++++\n");
    struct Queue *q = createQueue();
    enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    struct QNode *n = deQueue(q);
    if (n != NULL)
      printf("Dequeued item is %d\n", n->key);
    if(n->key==30)
         printf("+++++++++  Testing Queue is working fine.    +++++++++++\n");
    else
         printf("+++++++++ Testing Queue is not working fine. +++++++++++\n");

*/

    struct Graph *graph = createGraph(4);
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    //addEdge(graph,3,3);
    printf("Adj List Representations of Graph is :\n");
    printGraph(graph);
    printf("\nFollowing is Breadth First Traversal (starting from vertex 2) \n");
    bfs(graph,2);

    return 0;
}
