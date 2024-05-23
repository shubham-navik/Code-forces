#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t;
    cin >> t;
    while(t--){
        ll m,n;
        cin >> m >> n;
        string s1,s2;
        cin >> s1 >> s2;
        ll count = 0;
        // bool flag1=0, flag2 = 0;
       
        reverse(s2.begin(),s2.end());
       string  s3 = s1 + s2;
       

        for (int i = 0; i < m + n-1;i++){
            if(s3[i]!=s3[i+1]){
                continue;
            }
            else{
                count++;
                // break;
            }
        }

        if(count>1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }

           
    }
    return 0;
}