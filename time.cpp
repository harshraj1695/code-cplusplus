#include<iostream>
using namespace std;
   class time{
    int hour;
    int minute;
    public: void get(){
        cout<<"enter the hour and minutes ";
        cin>>hour>>minute;
    }
    void sumget(time a1,time a2){
        hour = a1.hour + a2.hour;
        minute= a1.minute+ a2.minute;
    }
    void put(){
        int n;
        n=minute;
        minute=minute/60;
        hour=hour+minute;
        n=n%60;
        cout<<"time is "<<hour<<":"<<n<<"minutes";
    }
   };
   int main(){
  time c1,c2,c3;
  c1.get();
  c2.get();
   c3.sumget(c1,c2);
   c3.put();
    return 0;
}