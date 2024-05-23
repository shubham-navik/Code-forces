#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[100], q[100];

    for (int i = 0; i < n;i++){
        cin >> p[i];
        cin >> q[i];

    }

    int count = 0;
    for (int i = 0; i < n;i++){
        if(q[i]>=2){
            if(q[i]-p[i]>=2){
                count++;
            }
        }
    }

    cout << count;
}