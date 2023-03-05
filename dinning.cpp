#include<iostream>
using namespace std;
class dh{
    int seat;
    char name[10];
    static int taken;
    public: void getdata(){
        taken++;
        cout<<"seat number is: "<<taken<<"\n";
        cout<<"ENter the name "<<"\n";
        cin>>name;
        seat=taken;
    }
    static void status(){
        cout<<"total no of seats :50"<<" ";
        cout<<"sear taken: "<<taken<<" ";
        cout<<"available sits ="<<50-taken<<" ";
    }
    void disp(){
        cout<<"seat number = "<<seat<<" ";
        cout<<"name = "<<name;
    }
};
int dh::taken;
int main (){
    dh ab[50];
    int i,s;
    char mo='y';
    for (i=0;i<50&&mo=='y';i++){
        ab[i].getdata();
        dh::status();
        cout<<"more(y/n)";
        cin>>mo;
        //mo=toupper(mo);
    }
    cout<<"enter the seat no whose details you want ";
    cin>>s;
    ab[s-1].disp();
    return 0;
}