#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    public: void get(){
        cout<<"enter the number";
        cin>>a;
    }
    void disp(){
        cout<<"value of a is "<<a<<"\n";
    }
    friend void swap(c1 &,c2 &);
};
class c2{
    int b;
    public: void get(){
        cout<<"enter the second number";
        cin>>b;
    }
    void disp(){
        cout<<"value of b is"<<b<<"\n";
    }
    friend void swap(c1 &,c2 &);
};
void swap (c1 &x,c2 &y){
    int temp=x.a;
    x.a=y.b;
    y.b=temp;

}
int main(){
     c1 a1;
     c2 a2;
     a1.get();
     a1.disp();
     a2.get();
     a2.disp();
     swap(a1,a2);
     a1.disp();
     a2.disp();
    return 0;
}