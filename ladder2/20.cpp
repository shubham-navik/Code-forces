#include<iostream>
using namespace std;


int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int i = 0;
    int j = 0;
    int count = 0;
    while (t[i])
    {

        if(s[j]==t[i]){
            count++;
            j++;
        }
        i++;
        }

        cout << count + 1;
}