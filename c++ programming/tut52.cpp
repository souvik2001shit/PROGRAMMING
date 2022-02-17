#include<iostream>
using namespace std;
class Baseclass{
  public:
      int var_base;
      void display(){
          cout<<"Displaying base class variable var_base"<<var_base<<endl;
      }
};
class Derivedclass:public Baseclass{
    public:
       int var_derived;
       void display(){
           cout<<"Displaying base class variable var_base"<<var_base<<endl;
           cout<<"Displaying derived class variable var_derived"<<var_derived<<endl;
       } 
};
int main()
{
    Baseclass*base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer=&obj_derived;//--->pointing  base class pointer to derived class

    base_class_pointer->var_base=34;
    base_class_pointer->display();
   // base_class_pointer->var_derived=3400;//--->will thorw an error
    base_class_pointer->var_base=3400;
   base_class_pointer->display();
   Derivedclass*derived_class_pointer;
   derived_class_pointer=&obj_derived;
   derived_class_pointer->var_base=9448;
   derived_class_pointer->var_derived=98;
   derived_class_pointer->display();

    return 0;
}