#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define y "YES\n"
#define no "NO\n"

int main(){
    ll t;
    cin >> t;
    ll m = 0;

    while(t--){
       ll a,b,c;
       cin >> a >> b >> c;
       if((2*b-c)%a==0 && (2*b-c)>0){
           cout <<y;
           continue;
        //    return 0;
       }
       else if(((a+c))%(2*b)==0){
           cout << y;
           continue;
        //    return 0;
       }

       else if((2*b-a)%c==0 && (2*b-a)>0){
           cout << y;
           continue;
        //    return 0;
       }

       else{
           cout << no;
           continue;
        //    return 0;
       }
    // ll m = 0;
    // if(m==1){
    //     cout << 1 << "\n";
    //     m = 0;
    //     continue;
    // }
    // else{
    //     cout << 0 << "\n";
    //     m = 1;
    // }
            }


            
}