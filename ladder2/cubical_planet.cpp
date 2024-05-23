#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
     int count = 0;
     if(a!=d)
         count++;
         if(b!=e)
         count++;
         if(c!=f)
         count++;


         if(count==3){
         cout << "NO" << endl;
         }
         else{
         cout << "YES" << endl;
         }
}