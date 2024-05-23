#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];

    }

    int minindex = 0;
    int maxindex = 0;
    int mi = arr[0], ma = arr[0];

    for (int i = 1; i < n;i++){
        if(mi>arr[i]){
            mi = arr[i];
            minindex = i;
        }
        if(ma<arr[i]){
            ma = arr[i];
            maxindex = i;
        }
    }


    if(abs(minindex-maxindex)==n-1){
        cout << n - 1;
        return 0;
    }
    else{
        int Min = min(minindex, maxindex);
        int Max = max(minindex, maxindex);
        if(abs(minindex-maxindex)+Min>(abs(minindex-maxindex)+n-1-Max)){
            cout << abs(minindex - maxindex) + Min;
        }
        else{
            cout << (abs(minindex - maxindex) + n-1 - Max);
        }
    }


}