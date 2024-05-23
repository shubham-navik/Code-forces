#include<iostream>
#include<cmath>
using namespace std;

// Acceptde

int sum_of_side(int a,int b,int c){

    int l = sqrt((a * b) / c);
    int w = sqrt((b * c) / a);
    int h = sqrt((c * a) / b);

    return 4 * (l + w + h);
}


int main(){
    int a, b, c;
    cin >> a >> b >> c;

    cout << sum_of_side(a, b, c);
}