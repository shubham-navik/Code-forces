#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n1, n2;
    cin >> n1 >> n2;
    if(n1==0 && n2==0){
        cout << "OK" << endl;
        exit(0);
    }
    vector<ll> v;
    while(n1>0){
        v.push_back(n1 % 10);
        n1 = n1 / 10;
    }
    ll max = 10;
    for (int i = 0; i < v.size();i++){
        if(max>v[i] && v[i]!=0){
            max = v[i];
        }
      
    }

   ll num= count(v.begin(), v.end(), 0);
   sort(v.begin(), v.end());
   for (int i = 0; i <= num;i++){
        v[i] = 0;
   }
   v[0] = max;
   string s = "";
//    reverse(v.begin(), v.end());
   ll x = 0;
   for (int i = 0; i < v.size();i++){
        x = x * 10 + v[i];
   }
//    cout << x << endl;
   if(x==n2){
        cout << "OK" << endl;
   }
   else{
        cout << "WRONG_ANSWER" << endl;
   }

        return 0;
}