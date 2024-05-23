#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count[10];
    fill(count,count+10,0);
    // for (int i = 0; i < 10;i++)
        // cout << count[i] << " ";
        for (int i = 0; i < s.size(); i++)
        {
            count[s[i] - '0']++;
        }

  
  if(count[4]>0 || count[7]>0){
    if(count[4]>=count[7]){
        cout<<4;
        return 0;
    }
    else{
        cout << 7;
        return 0;
    }
  }
  else{
    cout << -1;
    return 0;
  }
  
}