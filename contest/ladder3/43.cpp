#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    sort(a, a + n);
    if( n==1){
        cout << a[0] + 1;
        return 0;
    }
    else{
        for (int i = 0; i < n;i++){
            if(a[i+1]-a[i]==1){
                continue;
            }
            else{
                cout << a[i] + 1;
                return 0;
            }
        }
        cout << a[n - 1] + 1;
    }
}