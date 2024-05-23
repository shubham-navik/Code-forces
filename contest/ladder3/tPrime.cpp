#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    // v.push_back(9);
    v.push_back(11);

    for (int i = 2; i < 1000000; i++)
    {
        if((6*i-1)%2==0  ||(6*i+1)%2==0 || (6*i-1)%3==0  ||(6*i+1)%3==0||(6*i-1)%5==0  ||(6*i+1)%5==0||(6*i-1)%7==0  ||(6*i+1)%7==0||(6*i-1)%11==0  ||(6*i+1)%11==0){

        }
        else{
            v.push_back(i);
            // v.push_back(i);
        }
    }

    for (int i = 0; i < 25;i++){
        cout << v[i] << " ";
    }
}