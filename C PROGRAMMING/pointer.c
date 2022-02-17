#include<stdio.h>
int main()
{
  float a=6.65;
  float* p;
  p=&a;  
  printf("the value of a is %x",p);
  printf("the value of a is %p",&a);
  printf("the value of a is %f",*p);

  return 0;


}