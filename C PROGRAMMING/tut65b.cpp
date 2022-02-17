#include<iostream>
using namespace std;

template<class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
   float a;
   float b;
   a=8;
   b=5.9;
   cout<<a;
   cout<<endl;
   cout<<b;
   cout<<endl;

   swapp(a,b);
   cout<<a;
   cout<<endl;
   cout<<b;
   cout<<endl;
    int x;
   int y;
   x=8;
   y=9;
   cout<<x;
   cout<<endl;
   cout<<y;
   cout<<endl;

   swapp(x,y);
   cout<<x;
   cout<<endl;
   cout<<y;
    return 0;
}