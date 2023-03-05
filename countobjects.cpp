#include<iostream>
using namespace std;
class A
{
 public:
 static int count;
 public:
   A()
   {
     count++;
   }
};
int A::count;
int main()
{
 A obj1,obj2,obj3,obj4;
 cout<<"no of objects created= ";
 cout<<A::count;
}
