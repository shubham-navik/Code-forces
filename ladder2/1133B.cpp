#include<bits/stdc++.h>
using namespace std;
#define ll long long


struct shubham{
    ll cand;
    bool flag;
}s;

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
    ll n,k;
    cin >> n>>k;

    struct shubham s[n];
    for (int i = 0; i < n;i++){
        cin >> s[i].cand;
        s[i].flag = 0;
    }

    ll count = 0;

    for (int i = 0; i < n;i++){
        for (int j = i; j < n;j++){
            if(s[i].flag==0 && s[j].flag==0 && i!=j){
                if((s[i].cand+s[j].cand)%k==0){
                    s[i].flag = 1;
                    s[j].flag = 1;
                    count++;
                }
            }
        }
    }

    cout << count * 2;
}