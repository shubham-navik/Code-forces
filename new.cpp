#include<iostream>
using namespace std;


int distinct(string s){

    int carr[125];

    for (int i = 0; i < 125;i++){
        carr[i] = 0;
    }

    for (int i = 0; i < s.length();i++){
        carr[s[i] + 0]++;
    }

    int count = 0;
    for (int i = 0; i < 125;i++){
       if(carr[i]>0){
           count++;
       }
    }

    return count;
}

int main(){

    string s;
    cin >> s;
  if(distinct(s)%2==0){
      cout << "CHAT WITH HER!";
  }
  else{
      cout << "IGNORE HIM!";
  }


    // if(distinct(s)%2==0){
    //     cout << "CHAT START";
    // }
    // else{
    //     cout << "NO CHAT";
    // }
}