#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for (int i = 2;;i++){
    bool flag = false;
        // cout << i;
        for (int j = 2; j * j <= i;j++){
                    if(i%j==0){
                        flag = true;
                        break;
                        // cout << i << " ";
                    }

        }
                  
                    if(!flag){
                        cout << i << " ";
                        count++;
                    }
                    if(count==n){
                        return 0;
                    } 
    }
    return 0;
}