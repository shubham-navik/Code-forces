#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int y, k, n;
    cin >> y >> k >> n;
    long long int x = k - y % k;
    long long int top = n - y;
   
   if(x<=top){
       cout << x;
       x += k;
       while(x<=top){
           cout << " " << x;
           x += k;
       }
   }
    
    else{
        cout << -1;
        return 0;
    }
    return 0;
}