#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, s2;
    cin >> s >> s2;

    string s3[7] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

    if(s==s3[0]){
        if(s2==s3[0] || s2==s3[2] || s2==s3[3]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
    if(s==s3[1]){
        if(s2==s3[1] || s2==s3[3] ||s2==s3[4]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
    if(s==s3[2]){
        if(s2==s3[2] || s2==s3[4] ||s2==s3[5]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
    if(s==s3[3]){
        if(s2==s3[3] || s2==s3[5] ||s2==s3[6]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
    if(s==s3[4]){
        if(s2==s3[4] || s2==s3[6]||s2==s3[0]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
    if(s==s3[5]){
        if(s2==s3[5] || s2==s3[0]||s2==s3[1]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
    if(s==s3[6]){
        if(s2==s3[6] || s2==s3[1]||s2==s3[2]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
}