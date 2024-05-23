#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    // cout << s;
    // int i = 0;

   long long int found;
    long long int i;
    // int flag = 0;
    for ( i =0; i < s.size(); i++)
    {
        if(s[i]=='^'){
            found = i ;
            // flag = 1;
            // return 0;
        }

    }

    long long int sum_left = 0, sum_right = 0;

    for ( i = 0; i < s.size();i++){
        if((s[i])>='1' && (s[i])<='9'){

        if(i-found<0){
            sum_left=sum_left+(s[i]-'0')*(found-i);
        }

        else{
            sum_right =sum_right+(s[i]-'0' ) * (i  - found);
        }
        }
        
    }

    if(sum_left==sum_right){
        cout << "balance";
        return 0;
        }
    if(sum_left<sum_right){
        cout << "right";
        return 0;
    }
    else{
        cout << "left";
        return 0;
    }
}