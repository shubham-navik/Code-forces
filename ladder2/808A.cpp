#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
     ll n;
     cin >> n;
     vector<ll> v;
     for (int i = 1; i < 10;i++){
         v.push_back(i);
     }
     ll i = 0;
     while(v.size()!=100){
         v.push_back(v[i] * 10);
         i++;
     }

    //  for (int i = 0; i < v.size();i++){
    //      cout << v[i] << " ";
    //  }
         ll k = 0;
     for (int i = 0; i < v.size();i++){
        if(n>v[i]){
           continue;
        }
        else if(n==v[i]){
            k=i+1;
            
            break;
            
        }
        else{
            k = i;
            break;
        }
     }

     cout << v[k] - n << endl;
     
     return 0;
}