#include<stdio.h>
struct btnode {
    struct node *lc;
    int data;
    struct node *rc;
};

/**
inorder traversal of tree
*/
void inorder(struct btnode *root)
{   if(root->lc==NULL&&root->rc==NULL)
    {
        printf("%d ",root->data);
        return;
    }
    else{
        inorder(root->lc);
        printf("%d ",root->data);
        inorder(root->rc);
    }
}

/**
postorder traversal of tree
*/
void postorder(struct btnode *root)
{   if(root->lc==NULL&&root->rc==NULL)
    {
        printf("%d ",root->data);
        return;
    }
    else{
        postorder(root->lc);
        postorder(root->rc);
        printf("%d ",root->data);
    }
}

/**
preorder traversal of tree
*/
void preorder(struct btnode *root)
{   if(root->lc==NULL&&root->rc==NULL)
    {
        printf("%d ",root->data);
        return;
    }
    else{
        printf("%d ",root->data);
        preorder(root->lc);
        preorder(root->rc);
    }
}

/**
count number of leaf nodes
*/
int countLeafNode(struct btnode *root)
{
    int left=0,right=0;
    int leafnode;
    if(root->lc==NULL && root->rc==NULL)
    {
        return 1;
    }
    else
    {
        left=countLeafNode(root->lc);
        right=countLeafNode(root->rc);
        leafnode =  left + right;
        return leafnode;
    }
}

/**
count number of internal nodes
*/
int countInternalNode(struct btnode *root)
{
    int left=0,right=0;
    int leafnode;
    if(root->lc==NULL && root->rc==NULL)
    {
        return 0;
    }
    else
    {
        left=countLeafNode(root->lc);
        right=countLeafNode(root->rc);
        leafnode =  1+left + right;
        return leafnode;
    }
}

int findMax(int a,int b)
{
    return (a>b?a:b);
}

/**
find height of a tree
*/
int heightBT(struct btnode *root)
{
    int leftHeight=0,rightHeight=0;
    int height;
    if(root->lc==NULL && root->rc==NULL)
    {
        return 0;
    }
    else
    {
        leftHeight=heightBT(root->lc);
        rightHeight=heightBT(root->rc);
        height =  1+ findMax(leftHeight,rightHeight);
        return height;
    }
}

/**
To check whether given binary tree is strict binary tree or not
*/
int isStrictBTree(struct btnode *root)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->lc==NULL && root->rc==NULL)
    {
        return 1;
    }else
    {
        if(root->lc!=NULL && root->rc!=NULL)
        {
            return isStrictBTree(root->lc)&&isStrictBTree(root->rc);
        }else
        {
            return 0;
        }
    }
}

int main(void)
{
    struct btnode root={NULL,10,NULL};
    struct btnode node1={NULL,20,NULL};
    struct btnode node2={NULL,30,NULL};
    struct btnode node3={NULL,40,NULL};
    struct btnode node4={NULL,50,NULL};
    root.lc=&node1;
    root.rc=&node2;
    node1.lc=&node3;
    node1.rc=&node4;
    printf("Inorder\n");
    inorder(&root);
    printf("\n\nPostorder\n");
    postorder(&root);
    printf("\n\nPreorder\n");
    preorder(&root);
    printf("\n\n# leaf nodes : %d\n",countLeafNode(&root));
    printf("\n# internal nodes : %d\n",countInternalNode(&root));
    printf("\nHeight of tree : %d\n",heightBT(&root));
    printf("\nIs binary tree is strict binary tree ? %s \n",isStrictBTree(&root)==0?"true":"false");

return 0;

}
