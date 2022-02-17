#include<iostream>
#include<cmath>
using namespace std;
class point
{
    private:
       int x,y;
      friend float distance(point ,point );
    public:
       point(int a,int b)
       {
           x=a;
           y=b;
       }
       void displaypoint()
       {
           cout<<"The point is("<<x<<","<<y<<")"<<endl;
       }
};

float  distance(point p,point q)
{
    return sqrt(pow((p.x-q.x),2)+pow((p.y-q.y),2));
}
int main()
{
    float result;
    point p(1,1);
    p.displaypoint();
    point q(4,6);
    q.displaypoint();
    result =distance(p,q);
    cout<<"The result is"<<result;
    return 0;

}