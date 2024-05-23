#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll shubham(ll i){
  ll rev = 0;
  while(i>0){
    rev = rev * 10 + i % 10;
    i = i / 10;
  }

  return rev;
}

int main(){
  ll k;
  cin >> k;

  vector<ll> v;
  stack < ll > s;
  for (ll i = 1; i < 6000;i++){
    if(i<10){
      v.push_back(i);
    }
    else{
      ll x=i, y;
      while(x>=10){
        y = x % 10;
        x = x / 10;
        s.push(y);
      }
      s.push(x);
      while(!s.empty()){
        y = s.top();
        s.pop();
        v.push_back(y);
      }
    }
  }

  cout << v[k - 1] << endl;
  
  return 0;
}