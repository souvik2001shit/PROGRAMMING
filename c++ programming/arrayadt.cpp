#include<iostream>
#include<array>
using namespace std;
void display(array<int,6>&ar)
{
    cout<<"The elements are:"<<" ";

    for ( int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
}

int main()
{
    array<int ,6>arr;
     for(int i=0;i<6;i++)
     {
     cout<<"Enter the element of the array"<<endl;
     cin>>arr[i];
     }
    // array<int,6>::iterator it=arr.begin();
    //  *it=45;
    //  it++;
    //  *it=6;
    //  it++;
    // cout<<arr.front()<<endl;
    // cout<<arr.back();
    array<int,6>::iterator iter=arr.begin();
    arr.insert(iter+1,5);

    

    display(arr);
    return 0;
}