#include<bits/stdc++.h>
using namespace std;


int shubham(string s){

    for (int i = 0; i < s.length();i++){
        if((s[i]-'0')==4 ||(s[i]-'0')==7){
           
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(shubham(s)){
        int x = 0, y = 0;
        for (int i = 0; i < s.length() / 2;i++){
            x = x + (s[i] - '0');
        }
        for (int i = s.length() / 2; i < s.length();i++){
            y = y + (s[i] - '0');
        }

        if(x==y){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }

    else{
        cout << "NO";
    }
}