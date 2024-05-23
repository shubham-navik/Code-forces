#include<iostream>
using namespace std;


void find( long long int num,long long int k){
  long long int a, b;
  a = 2 * k - 1;
 
  if(a>num){
    if (num%2==0)
    {
      b = num / 2;
    }
    else
      b = num / 2 + 1;
        k = k - b;
        b = 2 * k;
        cout << b;

}
  else
    cout << a;
}


int main(){
    long long int num;
   long long int k;
    cin >> num;
    cin >> k;
    // int arr[num];
    find(num, k);
}