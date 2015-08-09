#include<stdio.h>
#include <stdlib.h>
struct AdjListNode
{
    //edge form source to destination
    int dest;
    struct AdjListNode *next;

};

struct AdjList
{
    struct AdjListNode *head;
};

struct Graph
{
    int vertices;
    struct AdjList *adjListArray;
};

// A utility function to create a new adjacency list node
struct AdjListNode* newAdjListNode(int dest)
{
    struct AdjListNode* newNode =
            (struct AdjListNode*) malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int v)
{
    /**
    Graph create and initilize with its size
    */
    struct Graph *graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->vertices = v;

    /**
    adj list array of each vertices
    */
    graph->adjListArray = (struct AdjList*)malloc(v*sizeof(struct AdjList));

    /**
    initialize adjacency list with null
    */
    int i;
    for(i=0;i<v;i++)
    {
        graph->adjListArray[i].head = NULL;
    }

    return graph;
}

void addEdge(struct Graph *graph, int src,int dest)
{
    struct AdjListNode *newAdjNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newAdjNode->dest = dest;
    newAdjNode->next = NULL;
    //Adding new node's next as existing graph source value
    newAdjNode->next = graph->adjListArray[src].head;
    //Adding new node to first positio
    graph->adjListArray[src].head = newAdjNode;

    //Since Graph is unidirected then add a edge from dest to src
    newAdjNode = newAdjListNode(src);
    newAdjNode->next = graph->adjListArray[dest].head;
    graph->adjListArray[dest].head = newAdjNode->next;

}

void printGraph(struct Graph* graph)
{
    int v;
    for(v=0;v<graph->vertices;v++)
    {
        struct AdjListNode* adjNode = graph->adjListArray[v].head;
        printf("\nAdjacency List for vertex %d \nhead ",v);
        while(adjNode)
        {
            printf("-> %d",adjNode->dest);
            adjNode = adjNode->next;
        }

    }
}

int main()
{
    struct Graph *graph = createGraph(5);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
    // print the adjacency list representation of the above graph
    printGraph(graph);

return 0;
}
