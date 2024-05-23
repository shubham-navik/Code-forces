#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s,s2;
    cin >> s;

            int i = 0;
    if(n<=3){
        cout << s;
        return 0;
    }
    else{
       
            // int flag = 1;
            for (int j = 0; j < n;j++){
                if(j%2==0 &&j>0 && j<n-1 ){
                    s2[i] = '-';
                    i++;
                    // flag = 0;
                    // j--;
                    s2[i] = s[j];
                    i++;
                }
                else{
                    
                        s2[i] = s[j];
                        i++;
                                }

            }
        
    }

    // cout << s2;
    for (int k = 0; k < s2.length();k++){
        cout << s2[k];
    }
}