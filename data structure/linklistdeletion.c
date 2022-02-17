#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkListTraversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
//case:1
struct Node *deleteFirst(struct Node *head)
{
  struct Node *ptr=head;
  head=head->next;
  free(ptr);
  return head;
}
//case:2
struct Node *deleteAtIndex(struct Node *head,int index)
{
  struct Node *p=head;
  struct Node *q=head->next;
  for (int i=0;i<index-1;i++)
  {
      p=p->next;
      q=q->next;
  }
  p->next=q->next;
  free(q);
  return head;
}
///case:3
struct Node* deleteAtLast(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
///case:4
struct Node* deleteAtGivenIndex(struct Node *head,int value)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=14;
    second->next=third;

    third->data=45;
    third->next=fourth;

    fourth->data=56;
    fourth->next=NULL;

    printf("Linked list before deletion\n");
    linkListTraversal(head);
   // head=deleteFirst(head);
    // head=deleteAtIndex(head,2);
   // head=deleteAtLast(head);
     head=deleteAtGivenIndex(head,45);
    printf("Linked list after deletion\n");
    linkListTraversal(head);




    return 0;
}