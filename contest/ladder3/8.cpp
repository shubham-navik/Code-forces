#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int sum = 0;
    int count_odd = 0;
    int count_even = 0;
    for (int i = 0; i < n;i++)
    {
        sum += arr[i];
        if(arr[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }

    if(sum%2==0){
        cout << count_even;
    }
    else{
        cout << count_odd;
    }
}