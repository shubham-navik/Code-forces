#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x,y;
cin >> n >> x >> y;
double f = ((n * y) / 100.0);
int m = ceil(f);
if(m-x>0){
    cout << m - x;
}
else{
    cout << 0;
}
}