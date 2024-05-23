#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long int> v;
    v.push_back(0);
    v.push_back(1);
    int i = 2;
    while(v.size()!=100){
        v.push_back(v[i - 1] + v[i - 2]);
        i++;
    }

    for (int i = 0; i < 50;i++){
        cout << v[i] << " ";
    }
    printf("\n");
    long long int n;
    cin >> n;
    long long int k=n;
    int j = 0;
    long long int a[3];
    long long int x=0,b=0,c=0;
    for (int i = 0; i < 60;i++){
        if(v[i]<=n){
            continue;;
        }
        else{
            x = v[i - 1];
            n = n - x;
            break;
        }
    }
    for (int i = 0; i < 60;i++){
        if(v[i]<=n){
            continue;;
        }
        else{
            b = v[i - 1];
            n = n - b;
            break;
        }
    }
    for (int i = 0; i < 60;i++){
        if(v[i]<=n){
            continue;;
        }
        else{
            c = v[i - 1];
            n = n - c;
            break;
        }
    }
    if((x+b+c)!=k){
        cout << "I'm too stupid to solve this problem";
    }

    cout << x << " " << b << " " << c;
}