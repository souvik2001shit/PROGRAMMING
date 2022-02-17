#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element is :%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *reverseTheList(struct Node *head, int n)
{
    if (!head)
    {
        return NULL;
    }
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;
    int count = 0;
    while (current != NULL && count < n)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
    // if (next != NULL)
    // {

    //     head->next = reverseTheList(next, n);
    // }
    return prev;
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
    fourth->next = NULL;
    printf("Before reversing\n");
    linkListTraversal(head);
    head = reverseTheList(head, 4);
    printf("After reversing\n");
    linkListTraversal(head);

    return 0;
}