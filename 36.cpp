#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int i1=0, j1=n-1;
    int min=abs(arr[0]-arr[n-1]);

    // for (int i = 0; i < n-1;i++){
    //     for (int j = i + 1; j < n;j++){
    //         if(min>abs(arr[i]-arr[j])){
    //             min = abs(arr[i] - arr[j]);
    //             i1 = i;
    //             j1 = j;
    //         }
    //     }
    // }

    for (int i = 0; i < n - 1;i++)
    {
        if(abs(arr[i%n]-arr[i+1%n])<min){
            min = abs(arr[i % n] - arr[i + 1 % n]);
            i1 = i;
            j1 = i + 1;
        }


    }

        cout << i1 + 1 << " " << j1 + 1;
}