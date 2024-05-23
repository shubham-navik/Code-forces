#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    char v1[t][1000];
    int arr[t];
    
    // vector<vector<string>> v2;
    for (int i = 0; i < t;i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
        string s;
        cin >> s;
        for (int j = 1; j < s.size();j++){
            if(s[j-1]==s[j]){
                v1[i][j] = '-';
            }
            else{
                v1[i][j] = '+';
            }
        }
    }

    for (int i = 0; i < t;i++){

        for (int j = 0; j <arr[i]-1;j++){
            cout << v1[i][j];
        }
        cout << endl;
    }
}