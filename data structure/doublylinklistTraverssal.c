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
void linkListReverseTraversal(struct Node *ptr){
  while(ptr!=NULL)
  {
      printf("Element is %d \n",ptr->data);
      ptr=ptr->prev;
  }
}
int main()
{
 struct Node *head;
 struct Node *second;
 struct Node *third;
 struct Node *fourth;

head=(struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third=(struct Node *)malloc(sizeof(struct Node));
fourth=(struct Node *)malloc(sizeof(struct Node));

head->prev=NULL;
head->data=7;
head->next=second;

second->prev=head;
second->data=34;
second->next=third;

third->prev=second;
third->data=45;
third->next=fourth;

fourth->prev=third;
fourth->data=78;
fourth->next=NULL;
//linkListTraversal(head);
linkListReverseTraversal(fourth);

return 0;
}