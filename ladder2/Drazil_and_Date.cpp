#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int a, b, s;
   cin >> a >> b >> s;

   long long int k = abs(a) + abs(b);

   if(s>=k){
    if((s-k)%2==0){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }
   }
   else{
    cout << "NO";
    return 0;
   }
}