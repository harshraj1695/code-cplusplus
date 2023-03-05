#include<iostream>
using namespace std;

int c = 45; //this is global variable
int main() {
   int a,b,c;
   cout<<"Enter the value of a:"<<endl;
   cin>>a;
   cout<<"Enter the value of b;"<<endl;
   cin>>b;
   c = a+b;
   cout<<"the sum is "<<c<<endl;
   cout<<"The global variable c is "<<::c; /* here the ::(
    the scope resolution) symbol is used to print the output*/

    return 0;
   
   }