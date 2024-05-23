#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  int y,k,n;
    cin >> y >> k >> n;
   long long  int x = 1;
    if(y<n){
        while(x+y<=n){
            if((x+y)%k==0){
                cout << x << " ";
                x++;
            }
            else{
                x++;
            }

        }
    }
    else{
        cout << -1;
 
    }
}