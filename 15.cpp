#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << (sum / float(n));
}