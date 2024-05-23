#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector< long long int> vec;
    vec.push_back(4);
    vec.push_back(7);
    int i = 0;

    while(vec.size()!=200){
        vec.push_back(vec[i] * 10 + 4);
        vec.push_back(vec[i] * 10 + 7);
        i++;
    }

    int flag = 0;
    for (int i = 0; i < vec.size();i++){
        if(n%vec[i]==0){
            flag = 1;
            break;
        }
    }

    if(flag){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}