#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);

    int red_count = 0;
   
    int mix_count = 0;

    if(arr[0]>=3){
        red_count = arr[0] / 3;
        arr[0] = arr[0] % 3;
        arr[1] = arr[1] % 3;
        arr[2] = arr[2] % 3;

    }
    // if(b>=3){
    //     gre_count = b / 3;
    //     b = b % 3;
    // }
    // if(c>=3){
    //     blu_count = c / 3;
    //     c = c % 3;
    // }

    while(arr[0]>0 && arr[1]>0 && arr[2]>0 ){
        mix_count++;
        arr[0]--, arr[1]--, arr[2]--;
    }

    cout << red_count *3 + mix_count;
}