#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream hout("sample60.txt");
    string name;
    cout<<"Enter your name:";
    cin>>name;
    hout<<name+"is my name";
    hout.close();
    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of the fle is:"<<content;
    hin.close();

    return 0;
}