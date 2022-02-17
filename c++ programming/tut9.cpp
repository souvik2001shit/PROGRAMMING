#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    //selction control structure
    // if((age<18) && (age>0))
    // {
    //     cout<<"You can not come to my party"<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"You are a kid and you will get akid pass to the party"<<endl;
    // }
    // else if(age<1){
    //  cout<<"You are not yet born"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }

    switch(age)
    {
        case 18:
        cout<<"You are 18"<<endl;
        break;
        case 22:
        cout<<"You are 22"<<endl;
        break;
        case 1:
        cout<<"You are 1"<<endl;
        break; 
        case 16:
        cout<<"You are 16"<<endl;
        break;
        default:
        cout<<"not a valid age"<<endl;
    }
    return 0;
}