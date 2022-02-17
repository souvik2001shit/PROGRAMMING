#include<iostream>
using namespace std;
void linearsearch(int a[],int n)
{
    for(int i=0;i<5;i++)
    {
        if(a[i]==n)
        {
            cout<<"Element found at index:"<<i<<endl;
        }
    }
}
int main()
{
    int arr[5];
    cout<<"Enter five number of the array"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"please enter an element to search"<<endl;
    int num;
    cin>>num;
    linearsearch(arr,num);

    return 0;

}