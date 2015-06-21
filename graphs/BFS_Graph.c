#include<stdio.h>
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
    struct Graph *graph = (strcut Graph*)malloc(sizeof(struct Graph));
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
        graph->adjListArray[i].head = NULL;
    }

    return graph;
}

void addEdge(struct Graph *graph,int src,int dest)
{

}

int main(void)
{

return 0;
}
