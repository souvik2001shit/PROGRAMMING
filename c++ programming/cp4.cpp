#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<endl;
    int arr[t];
    for(int i=0;i<t;i++)
    {
   int a;
   cin>>a;
   arr[i]=sqrt(a);

    }
    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}