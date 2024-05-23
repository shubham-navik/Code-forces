#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5 + 5;

int n;
int arr[N];
ll prfx1[N];
ll prfx2[N];


int main(){
    cin >> n;
    for (int i = 1; i <= n;i++){
        cin >> arr[i];
        prfx1[i] = prfx1[i - 1] + arr[i];
    }

    sort(arr + 1, arr + n + 1);

    for (int i = 1; i <= n;i++){
        prfx2[i] = prfx2[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    ll a[q];

    for (int i = 0; i < q;i++){
        int t, l, r;
        cin >> t>> l>> r;
        if(t==1){
           a[i] =(prfx1[r] - prfx1[l - 1]);
        }
        else{
           a[i] =(prfx2[r] - prfx2[l - 1]);
        }
    }

    for (int i = 0; i < q;i++){
        cout << a[i] << "\n";
    }
}