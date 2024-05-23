#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    // cout << s1 + s2;
    string s4 = s1 + s2;

    // int count1[200];
    // int count2[200];

    // for (int i = 0; i < 200;i++)
    //    { count1[i] = 0;
    //     count2[i] = 0;}

    //    for (int i = 0; i < s4.length();i++){
    //     count1[s4[i] + 0]++;
    //     count2[s3[i] + 0]++;
    //    }
    //    int flag = 0;
    //    for (int i = 0; i < s3.length();i++){
    //     if(count1[i]==count2[i])
    //         flag = 1;
    //         else{
    //         cout << "NO";
    //         return 0;
    //         }
    //    }

    //    if(flag){
    //         cout << "YES";
    //    }
    //    else{
    //         cout << "NO";
    //    }

    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());

    if(s3==s4){
        cout << "YES";

    }
    else
        cout << "NO";
}