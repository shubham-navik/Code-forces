#include<bits/stdc++.h>
using namespace std;


double distance(float x1,float x2,float y1 ,float y2){

    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}




int main(){
    int n, k;
    cin >> n >> k;
    float x[n], y[n];
    for (int i = 0; i < n;i++){
        cin >> x[i] >> y[i];
    }

    double total_dist = 0;

    for (int i = 0; i < n-1;i++){
        total_dist += distance(x[i], x[i + 1], y[i], y[i + 1]);
    }
    cout<<fixed<<setprecision(9);
    cout << (total_dist * k) / 50;
}