#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;
    int a[n + 2];
    a[0] = 0, a[n + 1] = 0;

    for (int i = 1; i <= n;i++){
        cin >> a[i];
    }

    int m;
    cin >> m;

    int arr[m+2], brr[m+2];
    arr[0] = 0;
    arr[m + 1] = 0;
    brr[0] = 0;
    brr[m + 1] = 0;

    for (int i = 1; i <= m;i++){
        cin >> arr[i] >> brr[i];
    }

    for (int i = 1; i <= m;i++){
        a[arr[i] - 1] = a[arr[i]-1] + brr[i]-1;
        a[arr[i] + 1] = a[arr[i]+1] + (a[arr[i]] - brr[i]);
        a[arr[i]] = 0;
    }

    for (int i = 1; i <= n;i++){
        cout << a[i]<<endl;
    }
}