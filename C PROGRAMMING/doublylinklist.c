#include<stdio.h>
#include<stdlib.h>
struct Node{
       struct Node *prev;
       int data;
       struct Node *next;
};
void linkListTraversal(struct Node *ptr){
  while(ptr!=NULL)
  {
      printf("Element=%d\n",ptr->data);
      ptr=ptr->next;
  }
}

int main()
{
 struct Node *head;
 struct Node *one;
 struct Node *two;
 struct Node *three;

head=(struct Node *)malloc(sizeof(struct Node));
one=(struct Node *)malloc(sizeof(struct Node));
two=(struct Node *)malloc(sizeof(struct Node));
three=(struct Node *)malloc(sizeof(struct Node));

one->data=34;
one->prev=NULL;
one->next=two;

two->data=45;
two->prev=one;
two->next=three;

three->data=78;
three->prev=two;
three->next=NULL;
head=one;
linkListTraversal(head);
return 0;
}