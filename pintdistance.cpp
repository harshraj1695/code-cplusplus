#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x,y;
    public: void get(){
        cout<<"enter the x and y point";
        cin>>x>>y;
    }
    void distance(point a1, point a2){
        int d;
        d=(((a1.x-a2.x)*(a1.x-a2.x))-((a1.y-a2.y)*(a1.y-a2.y)));
        if(d<0){
            d=d*(-1);
        }
        d=sqrt(d);
        cout<<"distance between two points is "<<d<<"\n";
    }
    
};
int main(){
    point c1,c2,c3;
    c1.get();
    c2.get();
    c3.distance(c1,c2);
    return 0;
}