#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int flag=0;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='0'){
            flag = i;
            break;
        }
    }

    for (int i = 0; i < s.length();i++){
        if(i==flag){
            continue;
        }
        else{
            cout << s[i];
        }
    }
}