#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<char> v;
    while(t--){
        char a[8][8];
        int flag = 0;
        for (int i = 0; i < 8;i++){
            for (int j = 0; j < 8;j++){
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < 8;i++){
            int count_R = 0;
            for (int j = 0; j < 8;j++){
                if(a[i][j]=='R')
                    count_R++;
            }
            if(count_R==8){
                v.push_back('R');
                flag = 1;

                break;
            }
        }

        if(flag==0){
            v.push_back('B');
        }

    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}