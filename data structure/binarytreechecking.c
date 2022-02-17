#include <stdio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createnode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int isBst(struct Node *root)
{
    static struct Node *prev=NULL;
    if (root != NULL)
    {
        if(!isBst(root->left))
        {
            return 0;
        }
        if(prev!=NULL && root->data<= prev->data)
        {
            return 0;
        }
        prev=root;
        return isBst(root->right);
    }
    else{
        return 1;
    }
}
int main()
{
    struct Node *p = createnode(8);
    struct Node *p1 = createnode(7);
    struct Node *p2 = createnode(10);
    struct Node *p3 = createnode(6);
    struct Node *p4 = createnode(9);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p2->left = p4;

    inorder(p);
    printf("\n");
    if(isBst(p))
    {
        printf("This is Bst");
    }
    else{
        printf("This is not Bst");
    }

    return 0;
}