#include<iostream>
using namespace std;
int main(){
    int n;
    int a=0,b=1,c,m=0,p=1,g,q;
    cout<<"enter the number of terms ";
    cin>>n;
    cout<<" "<<a<<" "<<b;
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
        
    }
    cout<<"\n"<<"missing terms are";
        for(int i=0;i<n;i++){
             g=m+p;
             m=p;
             p=g;
            if((p-m)>1){
            //cout<<" "<<m;
                for(int i=1;i<(p-m);i++){
                cout<<" "<<m+i;
                } 
           }
        }
    return 0;
}
