#include<bits/stdc++.h>
using namespace std;
#define ll long double

int main(){
    ll a, b;
    cin >> a >> b;
    if(a==1 ){
      
      if(a<b){
          cout << "<";
      }
      else{
          cout << "=";
      }
      
    }
    else if(b==1){
        if(a>b){
          cout << ">";

        }
        else{
          cout << "=";
        }
    }

   else if(a==2 && b>2){
        // cout << ">";
        if(b==3){
          cout << "<";
        }
        else if(b==4){
          cout << "=";
        }
        else{
          cout << ">";
        }
    }
    else if(a>2 && b==2){
        if(a==3){
          cout << ">";
        }
        else if(a==4){
          cout << "=";
        }
        else{
          cout << "<";
        }
        
    }
    else{
        if(a>b){
          cout << "<";
        }
        else if(a==b){
          cout << "=";
        }
        else{
          cout << ">";
        }
    }
}