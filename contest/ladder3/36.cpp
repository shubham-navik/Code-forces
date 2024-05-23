#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    vector<long long int> v;
    v.push_back(1);
    int i = 0;

    while(i!=300){
        v.push_back(v[i] * 10 + 1);
        if(v[i]%100==44){
            v.push_back(1);
        }
       else{ v.push_back(v[i] * 10 + 4);}
        i++;
    }

    for (int i = 0; i < v.size();i++){
        if(v[i]%1000==444){
            v[i] = 0;
           
        }
    }
    for (int i = 0; i < v.size();i++){
        if(v[i]==n){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}