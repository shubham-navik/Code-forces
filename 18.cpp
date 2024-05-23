#include<bits/stdc++.h>
using namespace std;

int count1 = 0;
// int count2 = 0;

void amazing(int arr[],int i,int n){
    sort(arr, arr + i);
if(arr[n]>arr[i-1])
    count1++;
if(arr[n]<arr[0])
    count1++;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    for (int i = 1; i < n;i++){
        amazing(arr, i,i);
    }

    cout << count1;
}