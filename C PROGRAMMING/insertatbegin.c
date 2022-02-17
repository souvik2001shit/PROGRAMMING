#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
//// print the Link list ///
void linkListTraversal(struct Node *ptr)
{
   while(ptr !=NULL)
   {
       printf("Element :%d\n",ptr->data);
       ptr=ptr->next;
   }
   

}
struct Node* insertAtFirst(struct Node *head,int data){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));    
	ptr->data=data;
	ptr->next=head;
	return ptr;
}
struct Node* insertAtEnd(struct Node *head,int data){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node*p=head;
	while(p->next!=NULL){
		p=p->next;
	}
		p->next=ptr;
		ptr->next=NULL;
	return head;
}
struct Node* insertAtIndex(struct Node *head,int data,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node*p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
		ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}


struct Node* insertAfterNode(struct Node *head,  struct Node *prevNode,int data){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=prevNode->next;
	prevNode->next=ptr;
	
	
	
	return head;
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    //allocate memory for nodes in the link list in heap//
head =(struct Node *)malloc(sizeof(struct Node ));
second =(struct Node *)malloc(sizeof(struct Node ));
third =(struct Node *)malloc(sizeof(struct Node ));
fourth =(struct Node *)malloc(sizeof(struct Node ));

//link first and second nodes///
head->data=7;
head->next=second;
// /link second and third nodes////
second->data=11;
second->next=third;
// /link third and fourth nodes////
 third->data=41;
     third->next=fourth;
     // terminate the list at the third node////
 fourth->data=66;
fourth->next=NULL;

printf("Liniked list before insertion\n");
linkListTraversal(head);
//     head=insertAtFirst(head,56);
//  head=insertAtIndex(head,56,1);
//  head=insertAtEnd(head,56);
head=insertAfterNode(head,second,45);
  printf("\n linked list after insrtion");
     linkListTraversal(head);
return 0;

}
     
