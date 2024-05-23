#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int c;
    cin >> c;

    long long int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 1; i < n;i++){
        if(arr[i]-arr[i-1]<=c){
            count++;
        }
        else{
            count = 0;
        }

    }
    cout << count+1;
}