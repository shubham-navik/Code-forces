#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    char c;
    cin >> c;
    if(c >= 65 && c<= 90){
        cout << "ALPHA\nIS CAPITAL" << endl;
    }
    else if (c >= 97 && c <= 122){
        cout << "ALPHA\nIS SMALL" << endl;
    }else{
        cout << "IS DIGIT" << endl;
    }
    return 0;
}