#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, n) for (int i = 0; i < n;i++)

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
    ll n;
    cin >> n;
    ll count = 0;
    int a[n];
    f(i,n){
        cin >> a[i];
        if(a[i]==2){
            count++;
        }
    }

    ll c1 = n - count;
   if(count==0){
    f(i,n){
            cout << 1 << " ";
    }
   }
  else if(count>0&& c1>0){
    cout << 2 << " "<<1<<" ";
    f(i,n-2){
        if(count>0){
            count--;
            cout << 2 << " ";
        }
        else{
            cout << 1 << " ";
            c1--;
        }
    }

   }
   else{
    f(i,n){
        cout << 2 << " ";
    }

   }
}