#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(int x){
    while(x>0){
        if(x%10 != 4 && x%10 != 7){
            return false;
        }
        x /= 10;
    }
    return true;
}

int main(){
    int a, b;
    cin >> a >> b;
    int flag = 0;
    for (int i = a; i <= b;i++){
        if(solve(i)){
            flag = 1;
            cout << i << " " ;
        }
           
    }
    if(!flag){
        cout << -1;
    }
        return 0;
}