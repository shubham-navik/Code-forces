#include<bits/stdc++.h>
using namespace std;



long long int shubham(long long int arr[],int l,int r){
    long long int sum = 0;

    for (int i = l - 1; i < r ;i++){
        sum += arr[i];
    }
    return sum;
}
long long int shivam(long long int arr[],int l,int r,int n){
    long long int sum = 0;

    sort(arr, arr + n);

    for (int i = l - 1; i < r;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    long long int brr[n];
    for (int i = 0; i < n;i++){
        brr[i] = arr[i];
    }

        int m;
    cin >> m;
    int a[m], b[m], c[m];
    for (int i = 0; i < m;i++){
        cin >> a[i] >> b[i] >> c[i];
       
    }

    for (int i = 0; i < m;i++){
        if(a[i]==1){
            cout << shubham(arr, b[i], c[i]) << endl;
        }
        else{
            cout << shivam(brr, b[i], c[i],n)<<endl;
        }
    }
}