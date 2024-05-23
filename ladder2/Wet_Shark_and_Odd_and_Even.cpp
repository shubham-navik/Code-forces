#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    sort(arr, arr + n);

    long long int sum=0;

    for (int i = 0; i < n;i++){
        sum += arr[i];
    }

        // cout << sum;


        if(sum%2!=0){
    for (int i = 0; i < n;i++){
        if(arr[i]%2!=0){
            cout << sum - arr[i];
            return 0;
        }
    }
        }
        else{
    cout << sum;
    return 0;
        }
}