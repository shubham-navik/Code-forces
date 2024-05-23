#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_0 = 0;
    int count_1 = 0;
    for (int i = 0; i < s.size();i++){
        if(s[i]-'0'==1){
            count_1++;
        }
        else{
            count_0++;
        }
    }

    cout << abs(count_0 - count_1);
}