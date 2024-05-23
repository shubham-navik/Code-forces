#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n>>k;
    int a[n];
    vector<int> vec;
    for (int i = 1; i <= n;i++){
        vec.push_back(i);
    }

    sort(vec.begin(), vec.end(), greater<>());

    for (int i = 0; i < n;i++)
        a[i] = vec[i];

    sort(a + k, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        }
   
}