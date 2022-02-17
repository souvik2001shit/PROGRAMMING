#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
     int sum=0;
     for(int i=0;i<t;i++)
     {
         int n;
     cin>>n;
    while(n)
    {
         sum = sum+n%10;
         n=n/10;
    }
   cout<<sum<<endl;
   sum=0;
    }

    return 0;
}
