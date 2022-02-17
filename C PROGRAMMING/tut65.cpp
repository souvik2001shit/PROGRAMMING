#include<iostream>
using namespace std;
// int average(int a,int b)
// {
//     float c;
//     c=(a+b)/2;
//     return c;
// }
// float average2(float a, float b)
// {
//     float c=(a+b)/2;
//     return c;
// }
template<class T1,class T2>
float funcAverage(T1 a, T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}
int main()
{
    // int a;
    // a=average(2,3);
    // float b;
    // b=average(2,3);

    // cout<<"The value of a is:"<<a;
    // cout<<endl;
    // cout<<"The value of b is:"<<b;
    float a;
    a=funcAverage(5,2.8);
    cout<<a;
    return 0;
}