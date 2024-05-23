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

    int i = 0;
    while(sum%2!=0){
        sum =sum- arr[i];
        i++;
    }
    cout << sum;
}