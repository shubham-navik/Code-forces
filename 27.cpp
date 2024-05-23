#include<iostream>
#include<string.h>
using namespace std;


int main(){
    char s1[100], s2[100];
    cin >> s1 >> s2;

    for (int i = 0; i <sizeof(s1);i++){
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
      // cout << s1 << " " << s2;

    int k=strcmp(s1,s2);
    cout << k;
}