#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int count[1001];
    fill(count, count + 1001, 0);

    for (int i = 0; i < n;i++){
        count[arr[i]]++;
    }

    int c = 0;
    for (int i = 0; i < 1001;i++)
    if(count[i]>0)
        c++;

    sort(count, count + 1001);
    int val;
    val = count[1000];

    cout << val << " " <<  c<< endl;
}