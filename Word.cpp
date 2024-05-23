#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;


int main(){
    string s;
    cin >> s;
    int uppercaseLettercount = 0;
    int lowercaselettercount = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i]>=65 && s[i]<= 90)
            uppercaseLettercount++;
            else
                lowercaselettercount++;
    }

    if(lowercaselettercount>=uppercaseLettercount){
        for (int i = 0; i < s.length();i++){
            char c = tolower(s[i]);
            cout << c;
        }
    }

    else{
        for (int i = 0; i < s.length();i++){
            char d = toupper(s[i]);
            cout << d;
            
        }

    }
    return 0;
}