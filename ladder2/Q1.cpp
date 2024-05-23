#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int k = t;
    vector<int> v;
    while(k--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 1;

        for (int i = 0; i < n-1;i++){
          if(s[i]=='R'&& s[i+1]=='L'){
              flag = 0;
              v.push_back(0);
              break;
          }
           
            if(s[i]=='L'&& s[i+1]=='R'){
                flag = 0;
                v.push_back(i + 1);
                break;
            }
         
        }
        if(flag==1){
            v.push_back(-1);
        }

    }

    for (int i = 0; i < t;i++){
        cout << v[i] << endl;
    }
}