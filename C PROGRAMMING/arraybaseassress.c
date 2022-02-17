#include<stdio.h>
void func2(int*ptr)
{
    for(int i=0;i<4;i++)
    {
        printf("The value at %d is %d\n",i,ptr[i]);
    }
    *(ptr+2)=34;
    *(ptr+3)=54;
    
}
int main()
{
    int arr[]={23,13,3,4};
    func2(arr);
  //  func2(arr);
}