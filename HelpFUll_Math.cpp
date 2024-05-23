#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    // cout << s << endl;
    for (int i = 0; i < s.length()-1;i+=2){
        for (int j = 0; j < s.length()-1;j+=2){
            if(s[j]>s[j+2]){
                char c = s[j];
                s[j] = s[j + 2];
                s[j + 2] = c;
            }
        }
    }
    cout << s;
}