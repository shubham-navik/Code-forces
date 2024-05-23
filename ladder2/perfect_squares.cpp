#include<bits/stdc++.h>
using namespace std;

bool isPerfect(long double a){
    // return (a == sqrt(a) * sqrt(a));
    if(a>=0){
        long long sr = sqrt(a);
        return (sr * sr == a);
    }
    return false;
}



int main(){
    int n;
    cin >> n;
    long long int b = INT_MIN;

    while(n--){
        long long  a,x;
        cin >> a;

        if(!isPerfect(a)){
            x = a;
        if (b < x)
            b = x;
        }
    }

    cout << b;
}