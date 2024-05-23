#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<string> v;
    set<string>str;
    int n;
    cin >> n;
    string s;
        string first,second;
    while(n--){
        cin >> first >> second;
         s = second+first;
        str.insert(s);
        }
        
        cout << str.size();
}