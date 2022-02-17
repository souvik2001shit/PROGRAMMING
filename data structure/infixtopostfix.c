#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, char x)
{
    if (isFull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = x;
    }
}
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow\n");
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}
int precedence(char ch)
{
    if(ch=='*' || ch=='/' )
    {
        return 3;
    }
    else if(ch=='+' || ch=='-')
    return 2;
    else
    return 0;
}
int isOperator(char ch)
{
    if(ch=='*' || ch=='-'|| ch=='/'||ch=='+')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char *infixToPostfix(char *infix)
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
  char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
  int i=0;//Track infix traversal
  int j=0;//Track posfix addition
  while(infix[i]!=0)
  {
      if(!isOperator(infix[i]))
      {
          postfix[j]=infix[i];
          j++;
          i++;
      }
      else{
          if(precedence(infix[i])>precedence(stackTop(sp)))
          {
             push(sp,infix[i]);
             i++;
          }
          else{
              postfix[j]=pop(sp);
              j++;
          }
      }
  }
  while(!isEmpty(sp))
  {
      postfix[j]=pop(sp);
      j++;
  }
  postfix[j]='\0';
  return postfix;

}

int main()
{
    char *infix = "x-y/z-r*d";
    printf("postfix is %s",infixToPostfix(infix));

    return 0;
}