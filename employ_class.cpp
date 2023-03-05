#include<iostream>
using namespace std;
class employee{
    char name[10];
    int age;
    char desig[10];
    double salar;
 public: void  getdata(){
    cout<<"enter the name "<<"\n";
    cin>>name;
    cout<<"enter the age "<<"\n";
    cin>>age;
    cout<<"enter the designation "<<"\n";
    cin>>desig;
    cout<<"enter the salary"<<"\n";
    cin>>salar;
 }   
 void putdata(){
    cout<<name<<"\n";
    cout<<age<<"\n";
    cout<<desig<<"\n";
    cout<<salar<<"\n";
 }
}e[10];
int main(){
    int n;
    cout<<"enter the size of class "<<"\n";
    cin>>n;
    for(int i=0;i<n;i++){
        e[i].getdata();
    }
    for(int i=0;i<n;i++){
        e[i].putdata();
    }
    
    return 0;
}