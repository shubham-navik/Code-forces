#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll z;
    cin >> z;
    int e = 0, o = 0, n = 0, p = 0;
    while(z--){
        int x;
        cin >> x;
        if(x > 0){
            p++;
        }if(x<0){
            n++;
        }
        if( x % 2 == 0){
            e++;
        }else{
            o++;
        }
    }

    cout << "Even: " << e << "\n"
         << "Odd: " << o << "\n"
         << "Positive: " << p << "\nNegative: " << n << endl;
    return 0;
}