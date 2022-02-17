#include<iostream>
using namespace std;
int main()
{
    float a;
    int b;
    cin>>a;
    cin>>b;
    if(b%5==0 && b<a)
    {
        float c;
        c=a-b;
        cout<<c-0.5;
    }
    else{
        cout<<a;
    } 
    return 0;
}