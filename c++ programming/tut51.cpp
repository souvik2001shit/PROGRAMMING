#include<iostream>
using namespace std;
class complex{
    int real,imaginary;
     public:
       void setData(int a, int b)
       {
           real=a;
           imaginary=b;
       }
       void getData()
       {
           cout<<"The real part is"<<real<<endl;
           cout<<"The imaginary part is"<<imaginary<<endl;
       }
};
int main()
{
    // complex c1;
    // complex *ptr=&c1;
    complex *ptr=new complex;
    ptr->setData(1,45);
    ptr->getData();
     //Array of objects
     complex *ptr1=new complex[4];
    ptr1->setData(1,45);
    ptr1->getData();
    return 0;
}
