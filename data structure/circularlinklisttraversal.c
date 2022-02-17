#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    // printf("Element is %d\n",ptr->data);
    // ptr=ptr->next;
    // while(ptr!=head)
    // {
    //    printf("Element is %d\n",ptr->data);
    //    ptr=ptr->next;
    // }
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;
    second->data = 16;
    second->next = third;
    third->data = 18;
    third->next = fourth;
    fourth->data = 27;
    fourth->next = head;

    linkListTraversal(head);

    return 0;
}