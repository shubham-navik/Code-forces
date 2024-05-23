#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int arr[a+1];
    for (int i = 1; i <= a;i++)
        cin >> arr[i];

    int count[a ];
    for (int i = 0;i<a;i++)
        count[i] = 0;

    for (int i = 1; i <= a;i++){
        if(arr[i]>0){
            count[abs(i - b)]++;
        }
    }
    int k = 0;

    for (int i = 0; i < a;i++){
        if(count[i]>0){
            k++;
        }
    }

    cout << k;
}