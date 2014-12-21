#include<stdio.h>
#include<stdlib.h>
#define MAX 5
//insert element into statck
int push(int s[],int n,int top,int x)
{
    if(top+1==n)
    {
        printf("Stack is overflow.\n");
        exit(1);
    }
    else
    {
        top++;
        //element inserted
        s[top]=x;
    }

return top;
}
//pop element from statck
int pop(int s[],int n,int *top)
{
    if(*top==-1)
    {
        printf("\nstack is underflow.\n");
        exit(1);
    }
    else
    {
    int y = s[*top];
    *top=*top-1;
    return y;

    }

}
//print complete statck
void printStack(int s[],int n)
{
    printf("\nElements in stack are : \n");
    int i=0;
    for(i=0;i<=n;i++)
    {
        printf("%d ",s[i]);
    }
}
int top = -1;
int main(void)
{

    static int s[MAX];
    int x;
    top = push(s,MAX,top,10);
    printStack(s,top);

    top = push(s,MAX,top,20);
    printStack(s,top);

    top = push(s,MAX,top,30);
    printStack(s,top);

    top = push(s,MAX,top,40);
    printStack(s,top);

    top = push(s,MAX,top,50);
    printStack(s,top);

    x=pop(s,MAX,&top);
    printf("\nelement successfully poped from statck : %d\n",x);
    printStack(s,top);

    x=pop(s,MAX,&top);
    printf("\nelement successfully poped from statck : %d\n",x);
    printStack(s,top);

    x=pop(s,MAX,&top);
    printf("\nelement successfully poped from statck : %d\n",x);
    printStack(s,top);

    return 0;
}
