#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5];
    for (int i = 1; i < 5;i++)
        cin >> arr[i];

    string s;
    cin >> s;
    int i = 0;
    int sum = 0;

    while(s[i]!='\0'){
        sum += arr[s[i] - '0'];
        i++;
    }
    cout << sum;
}