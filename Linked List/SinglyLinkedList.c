#include<stdio.h>
#include<stdlib.h>
/**
linked list node
*/
struct node
{
    int data;
    struct node *next;
};


/**
Insert a node at the end of the linked list.
*/
struct node* append(struct node *head,int data)
{
    struct node *start = head;

    struct node *temp ;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if(start==NULL)
    {
        start=temp;
        return start;
    }

    while(start->next!=NULL)
    {
        start=start->next;
    }

    if(start->next==NULL)
    {
     start->next=temp;
     return head;
    }
}

/**
Reverse the linked list
*/
struct node* reverseList(struct node *head)
{
    struct node *p,*q,*r;
    p=q=NULL;
    r=head;
    while(r!=NULL)
    {
        p=q;
        q=r;
        r = r->next;
        q->next = p;
    }
    head=q;
    return head;
}

/**
Reversing the list recursively
*/
struct node* reverserListRecursively(struct node *prev,struct node *curr)
{
    if(curr == NULL)
    {
        return prev;
    }
    else
    {
        struct node *temp = curr->next;
        curr->next = prev;
        reverserListRecursively(curr,temp);
    }
}

/**
Merge two sorted linked list
*/
struct node* mergeLists(struct node *headA, struct node *headB)
{
    struct node *merge=NULL;
    struct node *headC;

    if(headA!=NULL&&headB==NULL)
    {
        headC = merge = headA;
        return merge;
    }
    else if(headA == NULL && headB != NULL)
    {
        headC = merge = headB;
        return merge;
    }

    if(headA->data > headB->data)
    {
        headC = merge = headB;
        headB = headB->next;
    }
    else if(headA->data < headB->data)
    {
        headC = merge = headA;
        headA=headA->next;
    }
    else{
        headC = headA;
        headA=headA->next;
        headB = headB->next;
    }

    while(headA!=NULL&&headB!=NULL)
    {
        if(headA->data==headB->data)
        {
            if(headA->data==headC->data)
            {
                headA = headA->next;
                headB = headB->next;
            }
            else
            {
                headC = headA;
                headA = headA->next;
                headB = headB->next;
            }
        }
        else if(headA->data>headB->data)
        {
            if(headB->data==headC->data)
            {
                headB=headB->next;

            }
            else
            {
                headC->next = headB;
                headB = headB->next;
                headC=headC->next;
            }
        }
        else
        {
            if(headA->data==headC->data)
            {
                headA=headA->next;
            }
            else
            {
                headC->next = headA;
                headA = headA->next;
                headC = headC->next;
            }
        }
    }

    if(headA==NULL)
    {
        headC->next = headB;
        return merge;
    }
    else if(headB==NULL)
    {
        headC->next = headA;
        return merge;
    }

 return merge;
}

/**
Check whether linked list contain cycle or not.
*/
int hasCycle(struct node *head)
{
    struct node *p,*q;
    int hasCycle  = 0;
    p=q=head;
    while(p!=NULL && q!=NULL && q->next!=NULL)
    {
        p=p->next;
        q=q->next->next;
        if(p==q)
        {
            hasCycle=1;
            return hasCycle;
        }
    }
    return hasCycle;
}

/**
Intersection Point of two linked list
*/
struct node* findIntersectionPoint(struct node* headA,struct node* headB)
{
    struct node *intersectPoint;
    int c1=0,c2=0,diff;
    struct node *A,*B;
    A=headA;
    B=headB;

    //Counting nodes in list A
    while(A!=NULL)
    {
        A=A->next;
        c1++;
    }
    A=headA;

    //Counting nodes in list B
    while(B!=NULL)
    {
        B=B->next;
        c2++;
    }
    B=headB;
    int count=0;

    //Moving pointer of largest list so that after this both the lists will have same no of elements
    if(c1>c2)
    {
        diff=c1-c2;
        while(count!=diff)
        {
            A=A->next;
            count++;
        }
    }
    else
    {
        diff=c2-c1;
        while(count!=diff)
        {
            B=B->next;
            count++;
        }
    }
    //Check for the intersection  point now
    while(A!=B)
    {
        A=A->next;
        B=B->next;
    }
    if((A!=NULL&&B!=NULL)&&(A==B))
        return A;

    return NULL;
}

/**
To print all the linked list
*/
void print(struct node *head)
{
    while(head!=NULL)
    {
        printf(" %d--> ",head->data);
        head=head->next;
    }
    printf("NULL");
}

/**
Count the number of elements in the list
*/
int count(struct node *p)
{
    int count = 0;
    if(p==NULL)
    {
        return (count=0);
    }
    else
    {
        while(p!=NULL)
        {
            count++;
            p =p->next;

        }
    }

    return count;

}

/**
printing linked list recursively in natural order
*/
void printList(struct node *head)
{
    if(head==NULL)
        return;
    else
    {
        printf(" %d--> ",head->data);
        printList(head->next);
    }
}

/**
printing linked list recursively in reverse order
*/
void printListReverse(struct node *head)
{
    if(head==NULL)
        return;
    else
    {
        printListReverse(head->next);
        printf(" <--%d ",head->data);
    }
}



int main(void)
{

    //First Linked List
    struct node *first=NULL;
    int arr1[]={1,1,3,5,7,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int j;
    for(j=0;j<size1;j++)
    {
        first=append(first,arr1[j]);
    }
    printf("First Linked List contains : \n");
    print(first);
    printf("\n\n");

    printf("Printing Linked List recursively in natural order \n");
    printList(first);
    printf("NULL\n\n");

    printf("Printing Linked List recursively in reverse\n");
    printf("NULL");
    printListReverse(first);
    printf("\n\n");

    printf("Reversing the linked list recursively \n");
    first = reverserListRecursively(NULL,first);
    printList(first);
    printf("NULL\n\n");


    //Second Linked List
    struct node *second=NULL;
    int arr2[]={2,4,5,6,6,7,9};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int k;
    for(k=0;k<size2;k++)
    {
        second=append(second,arr2[k]);
    }
    printf("\nSecond Linked List contains :\n");
    print(second);
    printf("\n\n");

    //Merge Linked lists first and second
    struct node *merge=NULL;
    merge=mergeLists(first,second);
    printf("\nMerged Linked List contains :\n");
    print(merge);
    printf("\n\n");

    //Reverse the merged list
    struct node *reverse=NULL;
    reverse=reverseList(merge);
    printf("\nReverse of Merged Linked List contains :\n");
    print(reverse);
    printf("\n\n");

    return 0;
}
