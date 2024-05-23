#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < t;i++){
      if(360%(180-arr[i])==0){
          cout << "YES"<<endl;
      }
      else{
          cout << "NO" << endl;
      }
    }
}