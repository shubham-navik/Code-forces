#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int b;
    long long int max , min ;
    int count_max = 0;
    int count_min = 0;

    long long int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    max = min = arr[0];
    for (int i = 0; i < n;i++){
        if(max==arr[i]){
            count_max++;
        }
        if(max>arr[i]){
            max = arr[i];
            count_max = 1;
        }

        if(min==arr[i]){
            count_min++;

        }
        if(min<arr[i]){
            min = arr[i];
            count_min = 1;
        }
    }



    cout << -(max - min) << " ";
    if(count_max==count_min && max==min){
    cout<<count_max *(count_min - 1) / 2;
    }
    else{
    cout << count_max * count_min;
    }
}