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
        printf("Element is %d\n",ptr->data);     //(*ptr).data
        //ptr=(*ptr).next;
        ptr=ptr->next;
    }
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


   //link first and second node
      // (*head).data=7;
      // (*head).next=second;
      head->data=7;
      head->next=second;
   //link second and third node
       // (*second).data=7;
       // (*second).next=third;
       second->data=16;
       second->next=third;
   //link third and fourth node
       // (*third).data=7;
      // (*third).next=fourth;
       third->data=18;
       third->next=fourth;
   //termnate the list at the third node
       // (*fourth).data=7;
       // (*fourth).next=NULL;
       fourth->data=27;
       fourth->next=NULL;
       
      linkListTraversal(head);



    return 0;
}