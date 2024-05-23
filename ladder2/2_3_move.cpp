#include <bits/stdc++.h>
using namespace std;

long long int shubham(long long int n){
    if(n==1){
        return 2;
    }
    if(n%3==2){
        return n / 3 + 1;
    }
    if(n%3==1){
        return (n-4)/ 3 + 2;
    }

    return n / 3 + 0;
}

long long int  shubh(long long int n){
    if(n==1){
        return 2;
    }
    if(n%2==0){
        return n / 2;
    }
    return (n-3) / 2 +1;
}

int main(){
    int t;
    cin >> t;
    vector<long long int > v;

    while(t--){
       long long  int n;
        cin >> n;
        v.push_back(min(shubham(n), shubh(n)));
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}