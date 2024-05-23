#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];

    sort(arr, arr + n);
     double pie = 3.1415926536;

    double area = pie * pow(arr[0], 2);
    // cout << area;
    
    if(n>=3){
        if(n%2==0){
        for (int i = 2; i < n - 1;i++){
            area = area + pie*pow(arr[i], 2) - pie*pow(arr[i-1], 2);
        }
    }
    else{
        for (int i = 2; i < n;i++){
            area = area + pie*pow(arr[i], 2) -pie* pow(arr[i-1], 2);
        }
    }
    }
      std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout << area;
}