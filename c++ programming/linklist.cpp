#include<iostream>
using namespace std;

class node{
    public:
       int data;
       node *next;
    node(){
        data=0;
        next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;
    } 
};
class linklist{
    node*head;
     public:
     linklist(){
         head=NULL;
     }
     void insertNode(int);
     void printlist();
};

void linklist::insertNode(int data)
{
    node*newNode=new node(data);

    if(head==NULL)
    {
        head=newNode;
        return;
    }
    node*temp;

}


int main(){
    return 0;
}