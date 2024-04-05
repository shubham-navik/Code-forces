#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
     while(true){
         ll m, n;
         cin >> m >> n;
         if( m <= 0 || n <= 0)
         break;
          
          if(m>n){
              swap(m, n);
          }
          ll sum = 0;
          for (int i = m; i <= n;i++){
              cout << i << " ";
              sum += i;
          }
          cout << "sum =" << sum << endl;
     }
    return 0;
}