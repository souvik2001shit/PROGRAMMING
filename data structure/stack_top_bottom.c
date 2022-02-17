#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int push(struct stack *ptr,int value)
{
    if(isFull(ptr))
    {
        printf("stack overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("stack underflow");
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int peek(struct stack *ptr,int i)
{
    if(ptr->top-i+1<0)
    {
      printf("Not a valid position");
      return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}
int main()
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=80;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(struct stack));
    printf("stack is created successfully");
    printf("Before pushing,Empty:%d\n",isEmpty(sp));
    printf("Before pushing,Full:%d\n",isFull(sp));
    push(sp,1);
    push(sp,23);
    push(sp,99);
    push(sp,75);
    push(sp,3);
    push(sp,64);
    push(sp,57);
    push(sp,46);
    push(sp,89);
    push(sp,6);//--->push 10 values
    
    printf("The top most value of this stack is %d\n",stackTop(sp));
    printf("The bottom most value of this stack is %d\n",stackBottom(sp));

    return 0;
}