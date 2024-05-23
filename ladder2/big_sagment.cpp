#include<iostream>
using namespace std;
#define ll long long int

int main(){
    int n;
    cin>>n;
    int pos=0;

    ll li, ri;
    int Max = 0;
    for (int i = 1; i <= n;i++){
        cin >> li >> ri;
        int max = abs(li - ri);
        if(max>Max){
            Max = max;
            pos = i;
        }
    }

    if(pos==0){
        cout << -1;
        return 0;
    }
    else{
        cout << pos;
        return 0;
    }
}