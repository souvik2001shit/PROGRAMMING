#include<stdio.h>
#include<stdlib.h>
//adt of array//
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;//point the first element in the array//

};
void createArray(struct myArray *a, int tSize, int uSize ){
   //* (*a).total_size=tSize;//d reference//struct address to struct//
   //* (*a).used_size=uSize;
  //*  (*a).ptr=(int*) malloc(tSize *  size(int)) 
      a->total_size=tSize;//d reference//struct address to struct//
    a->used_size=uSize;
    a->ptr=(int*) malloc(tSize *  sizeof(int));//integer array//





}
void show(struct myArray *a){
    for(int i=0;i<a->used_size;i++)
 {
     printf("%d\n",(a->ptr)[i]);
 }   
}
void setVal(struct myArray *a){
    int n;
    for(int i=0;i<a->used_size;i++)
 {
     printf("enter the element %d",i);
     scanf("%d",&n);
     (a->ptr)[i]=n;
 } 

}

int main()
{
struct myArray marks;//marks name ka array//
createArray(&marks,10,2);// iss array ma structure//
printf("we are running setVal now\n");
setVal(&marks);
printf("we are running show now\n");
show(&marks);
return 0;
}
