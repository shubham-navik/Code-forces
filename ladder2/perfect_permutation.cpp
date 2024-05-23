#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    cin >> n;
    if(n%2!=0){
        cout << -1;
        return 0;
    }

    int arr[n];
    for(int i=0;i<n;i++)
        arr[i] = i+1;

    for (int i = 0; i < n - 1;i++){
        swap(&arr[i], &arr[i + 1]);
        i++;
    }

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}