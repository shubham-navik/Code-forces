#include<iostream>
using namespace std;


int main(){

    int n, a, b;
    cin >> n >> a >> b;

    int count = 0;
    for (int i = a+1; i <= n;i++){
        if(i>=n-b){
            count++;
        }
    }

    cout << count;
    return 0;
}