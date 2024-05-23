#include<bits/stdc++.h>
using namespace std;

int main(){
    string shubham;
    for (int i = 1; i < 400;i++){
        shubham = shubham + to_string(i);
    }
    int n;
    cin >> n;
    cout << shubham[n - 1];
}