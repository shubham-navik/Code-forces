#include<bits/stdc++.h>

using namespace std;

int diviser_count(int x){
    int count = 0;

    for (int i = 1; i <= x;i++){
        if(x%i==0){
            count++;
        }
    }

    return count;
}




int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int sum = 0;

    for (int i = 1; i <= a;i++){
        for (int j = 1; j <= b;j++){
            for (int k = 1; k <= c;k++){
                sum = sum + diviser_count(i * j * k);
            }
        }
    }

    cout << sum;
}

