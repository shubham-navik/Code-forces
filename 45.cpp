#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m;i++){
        cin >> b[i];
    }

    int count[10001];
    for (int i = 0; i < 10001;i++){
        count[i] = 0;
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(b[j]%a[i]==0){
                count[b[j] / a[i]]++;
            }
        }
    }

    for (int i = 10000; i >= 0;i--){
        if(count[i]>0){
            cout << count[i];
            return 0;
        }
    }
}