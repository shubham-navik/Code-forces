#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    char c;
    cin >> c;
    cout << char(96 + ((c - 96) % 26) + 1) << endl;
    return 0;
}