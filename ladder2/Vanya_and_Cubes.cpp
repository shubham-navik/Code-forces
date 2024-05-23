#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long int> vec;
    for (int i = 1; i < 50;i++){
        vec.push_back(((i * (i + 1) * (2 * i + 1)) / 6 + (i * (i + 1)) / 2) / 2);
    }

    int sum = 0;
    for (int i = 0; i < 50;i++){
          if(vec[i]<=n){
       
    }
    else{
        cout << i ;
        return 0;
    }
    }
  
       
}