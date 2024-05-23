#include<iostream>
using namespace std;


int main(){
    string s[100];
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> s[i];

    string s1 = s[0];
    string s2;

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < n; i++){

        if(s[i]==s1)
            count1++;
            else{
                s2 = s[i];
                count2++;
            }
               
    }

    if(count1>count2){
        cout << s1;
    }
    else
        cout << s2;
}