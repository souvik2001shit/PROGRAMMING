#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<endl;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
       cout<<endl;
        arr[i]=a+b;
    }
    for(int i=0;i<t;i++)
    {
        cout<<arr[i]<<endl;;
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
    
//     cin>>t;
//     cout<<endl;
//     int arr[t];
//     int i=0;
//     int p=t;
//     int a,b,c;
//     while(t<=1)
//     {
//     cin>>a>>b;
//     cout<<endl;
   
//      arr[i]=a+b;
//      i++;
//      t--;
     
//     }
//     i=0;
//      while(p<=1)
//      {
//          cout<<arr[i]<<endl;
//          i++;
//          p--;
//      }
//     return 0;
// }