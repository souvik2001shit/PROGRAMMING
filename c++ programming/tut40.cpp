#include<iostream>
using namespace std;

class student{
    protected:
       int roll_number;

    public:
       void set_roll_number(int );
       void get_roll_number(void);
};
void student::set_roll_number(int r){
      roll_number=r;
}
void student::get_roll_number(){
      cout<<"The roll no.is"<<roll_number<<endl;
}




class Exam: public student{
    protected:
       float maths;
       float physics;
    public:
      void set_marks(float,float);
      void get_marks(void);
};
void Exam::set_marks(float m1,float m2)
{
   maths=m1;
   physics=m2;
}
void Exam::get_marks()
{
    cout<<"The marks obtained in maths are:"<<maths<<endl;
    cout<<"The mrks obtained in physics are:"<<physics<<endl;
}



class Result:public Exam{
    protected:
        float percentage;
    public:
        void display_results()
        {
            get_roll_number();
            get_marks();
            cout<<"Your results is "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main()
{
    Result souvik;
    souvik.set_roll_number(420);
    souvik.set_marks(94.0,90.0);
    souvik.display_results();
    return 0;

}