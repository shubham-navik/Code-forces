#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int arr[n];
    for (int i = 1; i <= n;i++)
        cin >> arr[i];

    int k = m;
    int count = 0;

    for (int i = 1; i <= n;i++){
        if(k>=arr[i]){
            k = k - arr[i];
        }
        else{
            count++;
            k = m;
            i--;
        }
    }
    cout << count+1;
}