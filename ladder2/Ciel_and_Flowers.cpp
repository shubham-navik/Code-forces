#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int r, g, b;
    cin >> r >> g >> b;
    int R = r % 3;
    int G = g % 3;
    int B = b % 3;
    int x = min(R, min(G, B));
    long long int bunquet = r / 3 + g / 3 + b / 3 +x;
    if(R==2&& G==2&& B==0 &b!=0 || R==2&& G==0&& B==2 &g!=0||R==0&& G==2&& B==2 &r!=0  ){
        bunquet++;
    }
    cout << bunquet;

    return 0;
}