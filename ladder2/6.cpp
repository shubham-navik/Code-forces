#include<iostream>
using namespace std;

int main(){
   long long int k;
   long long int w;
    long long int n;
    cin >> k >> n >> w;

  long long  int waste = (w * (w + 1) * k) / 2;
if(waste>n){
      cout << (waste-n);
}
else{
    cout << 0;
}
}