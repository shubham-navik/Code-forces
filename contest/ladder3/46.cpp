#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int l, r;
    cin >> l >> r;
    vector< long long int> vec;
    vec.push_back(4);
    vec.push_back(7);
    int i = 0;

    while(vec.size()!=2500){
        vec.push_back(vec[i] * 10 + 4);
        vec.push_back(vec[i] * 10 + 7);
        i++;
    }

    long long int sum = 0;
    int j = 0;

    for ( long long int i = l; i <= r;i++){
        if(i<=vec[j]){
            sum += vec[j];
        }
        else{
            j++;
            i--;
        }

    }

    cout << sum;
}