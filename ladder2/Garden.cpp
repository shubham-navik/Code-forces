#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int x = INT_MIN;

    while(n--){
        int a;
        cin >> a;
        if(k%a==0){
            if(x<a)
                x = a;
        }
    }
    cout << k/x;
}