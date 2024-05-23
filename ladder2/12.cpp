#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n >> s;

    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < n - 1;i++){
        s = s - a[i];
    }
    if(s>=0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}