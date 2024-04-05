#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll k, s;
    cin >> k >> s;
    int count = 0;
    int m = min(k, s);
    for (int i = 0; i <= m;i++){
        for (int j = 0; j <= m;j++){
            for (int k = 0; k <= m;k++){
                if(i + j + k == s){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}