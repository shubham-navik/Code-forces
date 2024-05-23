#include<bits/stdc++.h>
using namespace std;
#define ll long long

int shubham(ll n){

    ll sum = 0;
    while(n>0){
        sum += n % 10;
     
        n =n/10;
    }
    if(sum==10){
        return 1;
    }

    return 0;
}

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    bool flag = 0;
    for (int i = 0; i < b;i++){
        if((n-a*i)%b==0 && (n-a*i)>0 ){
            cout << "YES" << endl;
            cout << i << " " << (n - a * i) / b << endl;
            flag = 1;
            break;
        }
        else if((n-b*i)%a==0 && (n-b*i)>0){
            cout << "YES" << endl;
            cout << (n - b * i) / a << " " << i << endl;
            flag = 1;
            break;

        }
    }
    if(!flag){
        cout << "NO" << endl;
    }
}