//multiplication table//
#include <iostream>
using namespace std;
int main()
{
    int c;
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        c = num * i;
        cout << num<<"*"<<i<<"="<<c<<endl;
        
    }

    return 0;
}