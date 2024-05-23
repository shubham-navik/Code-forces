#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100001];
    for (int i = 1; i <= n;i++){
        int a;
        cin >> a;
        arr[a] = i;
    }

    int m;
    long long  vasya(0), patya(0);
    cin >> m;

    while(m--){
        int b;
        cin >> b;
        vasya += arr[b];
        patya += n + 1 - arr[b];
    }

    cout << vasya << " " << patya;
}