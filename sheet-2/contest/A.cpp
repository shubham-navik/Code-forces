#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    float x, p;
    cin >> x >> p;
    cout << fixed << setprecision(2);
    cout << 100*(p / (100 - x)) << endl;
    return 0;
}