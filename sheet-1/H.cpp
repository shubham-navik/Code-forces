#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    float x, y;
    cin >> x>>y;
    int f = floor(x / y);
    int c = ceil(x / y);
    int r = round(x / y);
    cout << "floor " << x << " / " << y << " = " << f<< "\n"
         << "ceil " << x << " / " << y << " = " << c<<"\n"
         << "round " << x << " / " << y << " = " << r;
    return 0;
}