#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n*n;i++){
        vec.push_back(i+1);
        vec.push_back(n*n-i);
    }

    // for (int i = 0; i < n * n;i++){
    //     cout << vec[i] << " ";
    // }

        for (int i = 0; i < n * n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << vec[i++] << " ";
            }
            i--;
            printf("\n");
        }
}