#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int reverse=0;
    while(n>0){
        int lastdigit= n%10; //to take out lsdt digit as remainder
        reverse = reverse*10 + lastdigit; //to remove digit at once tens or thousand place
        n=n/10;
    } 

    cout<<reverse<<endl;
   return 0;
}





