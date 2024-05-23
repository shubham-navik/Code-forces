#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

 

    string s;
    cin >> s;

    ll arr[26];
    fill( arr,arr+26, 0);
    for (int i = 0; i < s.length();i++){

        arr[s[i] -97]++;
    }

    sort(arr,arr+26,greater<int>());
    ll count = 0;
    for (int i = 0; i < 26;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }

    if(count%2==0 && count>0){
        cout << "Second" << endl;
    }
    else{
        cout << "First" << endl;
    }
}