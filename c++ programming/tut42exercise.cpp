#include<iostream>
#include<cmath>
using namespace std;

class simplecalculator{
    int a;
    int b;
    public:
      void set_data(int p,int q){
          a=p;
          b=q;
      }
   void display(void){
       cout<<"The addition result is"<<a+b<<endl;
       cout<<"The substraction result is"<<a-b<<endl;
       cout<<"The multiplication result is"<<a*b<<endl;
       cout<<"The division result is"<<a/b<<endl;
       }
};

class scientificcalculatr{
      int x;
      int y;
      public:
        void setData(int p,int q)
        {
            x=p;
            y=q;
        }
        void displayscientific(){
            cout<<"The squareroot is  "<<sqrt(x*y)<<endl;
            cout<<"the result of a^b is"<<pow(x,y)<<endl;
            cout<<"The logarithm of x is"<<log(x)<<endl;
            cout<<"The exponantial of x is"<<exp(x)<<endl;
        } 
};
 
 class hybridcalculator : public simplecalculator,public scientificcalculatr {
        
 };
int main()
{
    hybridcalculator m,n;
    m.setData(6,6);
    m.displayscientific();
    n.set_data(4,5);
    n.display();
    return 0;
}