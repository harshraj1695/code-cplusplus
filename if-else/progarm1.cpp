#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;
    if(age<18){
        cout<<"you cannot come to my party"<<endl;
        
    }
    else if (age==18)
    {
     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    }
    
    else{
        cout<<"ou can come to my party";
    }
    return 0;
}