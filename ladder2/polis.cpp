#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n;i++)
        cin >> arr[i];

    int count = 0;
    int power = 0;

    for (int i = 0; i < n;i++){
        if (arr[i]>0){
            power = power + arr[i];
        }
        else{
            if(power>0){
                power--;
            }
            else{
                count++;
            }
        }

    }

    cout << count;
}