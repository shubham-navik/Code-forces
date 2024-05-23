#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    int p, q;
    cin >> p >> q;

    for ( int j = p; j <= q;j++){

        a[j] = 1 - a[j];
    }

    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
}