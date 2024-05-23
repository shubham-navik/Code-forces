#include<bits/stdc++.h>
using namespace std;

int main(){
   long long  int n;
    cin >> n;
  
   long long  int count = 0;
        if(n%2==0){ long long int x = n / 2;

    for (int i = 1; i <= x / 2;i++){
        if(i!=x-i)
            count++;
    }

    cout << count;
    }
    else{
    cout << count;
    }
}