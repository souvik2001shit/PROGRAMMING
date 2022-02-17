#include<iostream>
using namespace std;
 

 int glo=6;//Global variable 
 void sum(){
     int a;
     cout<<"\nThe value of  glo is:"<<glo;
 }



int main()
{
    int glo=9;//Local variable
    int a=14,b=15;
    float pi=3.14;
    char c='d';
    bool is_true=false;
    cout<<"My name is souvik shit\n The value of a is "<<a<<".\nThe value of b is "<<b;
    cout<<"\n The value of pi is :"<<pi;
    cout<<"\n The value of c is "<<c;
    sum();
    cout<<"\n"<<glo;
    cout<<"\n"<<is_true;
    return 0;
}