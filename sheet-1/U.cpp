#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    float a;
    cin >> a;
    if(int(a) == a){
        cout << "int " << a << endl;
    }else{
        cout << "float " << int(a)<<" "<<a-int(a) << endl;
    }
    return 0;
}