#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll n;
    cin >> n;
    unordered_map<string, int> mp;
    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        if(mp.find(s)==mp.end()){
            mp[s]=0;
        
            cout << "OK" << endl;
        }

        else{
            mp[s]++;
            // unordered_map<string, int>::iterator itr;
            cout << s<<mp[s] << endl;
            
        }
    }
        return 0;
}