#include<stdio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data)
{
    struct Node *n;
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
struct Node *inorder(struct Node *root)
{
    while(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

struct Node *inorderpredecessor(struct Node *root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

struct Node *deleteNode(struct Node *root,int value)
{
    struct Node* ipre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    //search for the node to be deleted
    if(value<root->data)
    {
        root->left=deleteNode(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=deleteNode(root->right,value);
    }
    //Deletion strategy when the node is found//
    else{
        ipre=inorderpredecessor(root);
        root->data=ipre->data;
        root->left=deleteNode(root->left,ipre->data);
    }
    return root;
}

int main()
{
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    

    inorder(p);
    deleteNode(p,3);
    printf("\n");
    inorder(p);

    return 0;
}