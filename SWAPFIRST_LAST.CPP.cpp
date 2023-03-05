#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,first,last,num,count,a,b,c,m;
    cout<<"enter the number";
    cin>>n;
    num=n;
    count=log10(n);
    last=n%10;
    m=last;
    first=n/pow(10,count);
    last=last*(pow(10,count));
    a=(pow(10,count));
    c=num%a;
    b=last+c;
    b=b-m;
    b=b+first;
    cout<<"number is "<<b;
    return 0;
}