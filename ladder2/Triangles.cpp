#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int shubham(ll arr[] ){
    ll a = pow(arr[4] - arr[2], 2) + pow(arr[5] - arr[3], 2);
    ll b = pow(arr[4] - arr[0], 2) + pow(arr[5] - arr[1], 2);
    ll c = pow(arr[2] - arr[0], 2) + pow(arr[3] - arr[1], 2);

    ll bb[3] = {a, b, c};
    sort(bb, bb + 3);
    if(bb[0]>0 && (bb[2]==bb[0]+bb[1]))
        return 1;
    return 0;
}

int main(){

    ll arr[6];
    for (int i = 0; i < 6;i++){
        cin >> arr[i];
    }

    bool flag = 1;

    for (int i = 0; i < 6;i++){
        if(shubham(arr)){
            cout << "RIGHT" << endl;
            flag = 0;
            break;
        }
        arr[i]++;
        if(shubham(arr)){
            cout << "ALMOST" << endl;
            flag = 0;
            break;
        }
        arr[i] -=2;
        if(shubham(arr)){
            cout << "ALMOST" << endl;
            flag = 0;
            break;
        }
        arr[i]++;
    }

    if(flag==1){
        cout << "NEITHER" << endl;
    }
}