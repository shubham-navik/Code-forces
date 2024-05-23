#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    string s1,s2,s3;
    cin >> s1 >> s2>>s3;
    string s4, s5;
    s4 = s2;
    s5 = s3;
    //     cout << s2 << endl;
       reverse(s4.begin(),s4.end());
       reverse(s5.begin(),s5.end());
    //     if(s1==s2){
    //         cout << "yes";
    //     }
    //     else{
    //         cout << "no" << endl;
    //     }

    if(s1==s5 && s2==s4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
       return 0;
}