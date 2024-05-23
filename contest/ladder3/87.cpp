#include<bits/stdc++.h>
using namespace std;


long long int shubham(long long int n){
    long long int m = n;

    int count[10];
    for (int i = 0; i < 10;i++)
        count[i] = 0;

        while(m>0){
        int rem = m % 10;
        count[rem]++;
        m = m / 10;
        }

        if(count[4]==count[7]){
        return 1;
        }
        else{
        return 0;
        }

        return n;
}

int main(){

    long long int l;
    cin >> l ;
    vector< long long int> vec;
    vec.push_back(4);
    vec.push_back(7);
    int i = 0;

    while(vec.size()!=2500){
        vec.push_back(vec[i] * 10 + 4);
        vec.push_back(vec[i] * 10 + 7);
        i++;
    }

   
    for ( long long int i = 0; i <=vec.size();i++){
      if(vec[i]>=l){
        if(shubham(vec[i])){
             cout << vec[i];
          return 0;
        }
         
      }

    }

   
}