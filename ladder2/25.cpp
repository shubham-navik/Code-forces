#include<bits/stdc++.h>
using namespace std;

int dist(int arr[],int a,int b){
    int sum = 0;

  if(a<b) { for (int i = a-1; i < b-1;i++)
        sum += arr[i];
        }
        else{
             for (int i = b-1; i < a-1;i++)
        sum += arr[i];

        }

    return sum;

}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n;i++)
        cin >> arr[i];

    int a, b;
    cin >> a >> b;

    int sum = 0;

       for (int i = 0; i < n;i++)
        sum += arr[i];

       int k = dist(arr, a, b);
    //    cout << k;

    if(sum-k>=k){
        cout << k;
    }
    else{
        cout << sum - k;
    }

}