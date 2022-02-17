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
}
void insert(struct Node *root, int key)
{
    struct Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            printf("can not insert %d,already in Bst", key);
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct Node *new = createnode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

int main()
{
    struct Node *p = createnode(5);
    struct Node *p1 = createnode(3);
    struct Node *p2 = createnode(6);
    struct Node *p3 = createnode(1);
    struct Node *p4 = createnode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    insert(p, 16);
    printf("%d", p->right->right->data);
    return 0;
}