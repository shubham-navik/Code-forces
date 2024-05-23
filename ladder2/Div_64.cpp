#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int flag = 0;
    int flag2 = 0;
    if(s.length()>=7){
        for (int i = 0; i < s.length()-6;i++){
            int count = 0;
            if(s[i]=='1'){
                for (int j = i + 1; j < s.length();j++){
                    if(s[j]=='0'){
                        count++;
                    }
                    if(count==6){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag){
                flag2 = 1;
                break;
            }
            // else{
            //     cout << "no" << endl;
            // }
        }


        if(flag2){
            cout << "yes" << endl;
        }

    else{
        cout << "no" << endl;
    }

    }

    
    else{
        cout << "no" << endl;
    }
}