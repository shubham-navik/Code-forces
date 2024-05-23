#include<bits/stdc++.h>
using namespace std;

int tri(int n){
    int sum = 0;

    for (int i = 1; sum <= n;i++){
        sum += i;
        if(sum==n)
            return 1;
    }

    return 0;
}

int main(){
    int n;
    cin >> n;
    if(tri(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}