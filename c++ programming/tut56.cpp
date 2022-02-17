#include<iostream>
using namespace std;
class cwh{
    protected:
       string title;
       float rating;
    public:
        cwh(string s,float r){

            title =s;
            rating =r;
        }
      virtual  void display()
        {

        }
};
class cwhvideo:public cwh{
   float videolength;
    public:
     cwhvideo(string s,float r,float v1):cwh(s,r)
     {
         videolength=v1;
     }
     void display(){
         cout<<"This is an amazing video with the title"<<title<<endl;
         cout<<"Rating:"<<rating<<"out of 5 stars"<<endl;
         cout<<"Length of this video is"<<videolength<<"minutes"<<endl;
     }
};
int main()
{
    string title;
    float rating,vlen;
    int words;
    title="Django tutorial";
    vlen=4.25;
    rating=4.34;
    cwhvideo  djvideo(title,rating,vlen);
    cwh *tuts[2];
    tuts[0]=&djvideo;
    tuts[0]->display();
    return 0;
}