#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    char s[n];
    cin >> s;
    int count = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='X')
            count++;
    }

    count = n / 2 - count;
    int val = count;
   if(count>0){ for (int i = 0; i < n;i++){
        if(count==0){
            break;
        }
        else{
            if(s[i]=='x'){
                s[i] = toupper(s[i]);
                count--;
            }
        }
    }}
    else{
         for (int i = 0; i < n;i++){
        if(count==0){
            break;
        }
        else{
            if(s[i]=='X'){
                s[i] = tolower(s[i]);
                count++;
            }
        }
    }
    }
    if(val<0){
        cout <<-val<<endl<< s;}
    else{
    cout <<val<<endl<< s;
    }

}