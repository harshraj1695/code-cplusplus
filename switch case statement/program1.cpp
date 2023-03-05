#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"tell me your age\n";
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break; // if break is not there than all the cases will print
    case 22:
    cout<<"you are 22 "<<endl;
    break;
    case 2:
    cout<<"you are 2"<<endl;
    break;
    default:
    cout<<"no special cases"<<endl;
        break;
    }
    return 0;
}