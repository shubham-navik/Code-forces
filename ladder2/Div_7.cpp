#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v;

    while(t--){
        int n;
        cin >> n;
       if(n<=98){
        if(n%7==0){
            v.push_back(n);
        }
        else{
            v.push_back(n +7- n % 7);
        }
       }
       if(n==99){
        v.push_back(98);
       }
       if(n>=100&& n<=994 ){
        if(n%7==0){
            v.push_back(n);
        }
        else{
            v.push_back(n +7- n % 7);
        }
       }
       if(n>994){
        v.push_back(n - n % 7);
       }
    }

    for (int i = 0; i < v.size();i++){
       cout << v[i] << endl;
    }
}