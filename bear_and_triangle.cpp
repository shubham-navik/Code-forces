#include<bits/stdc++.h>
using namespace std;

int main(){
   long long  int a, b;
    cin >> a >> b;

    if(a>0 ){
        if(b>0){
            cout << 0 << " " << a + b << " " << a + b << " 0";
        }
        else{
            cout << 0 << " " << -(abs(a) + abs(b)) << " " << abs(a) + abs(b) << " 0";


        }
    }
    else{
        if(b>0){
            cout << -(abs(a) + abs(b)) << " " << 0<<" "<< 0 << " " << abs(a) + abs(b) ;
        }
        else{
           cout<<-(abs(a)+abs(b))<<" "<<"0"<<" "<<"0"<<" "<<-(abs(a)+abs(b));
        }
    }
}