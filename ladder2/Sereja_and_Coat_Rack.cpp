#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;

        sort(arr, arr + n);
    if(m<=n){
        int sum = 0;
        for (int i = 0; i < m;i++){
            sum += arr[i];
        }

        cout << sum;
        return 0;
    }

    else{
        int sum = 0;
        for (int i = 0; i < n;i++){
            sum += arr[i];
        }

        cout << (sum - (m - n) * d);
        return 0;
    }


}