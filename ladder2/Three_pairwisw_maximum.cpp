#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<string> v;
    int b[t][3];
    int k = 0;

    while(t--){
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);

        if(a[0]==a[1] && a[0]==a[2]){
            v.push_back("YES");
            b[k][0] = a[0];
            b[k][1] = a[1];
            b[k][2] = a[2];
            k++;
                }
                if(a[1]==a[2]&&a[1]!=a[0]){
            v.push_back("YES");
            b[k][0] = a[0];
            b[k][1] = a[1];
            b[k][2] = a[1];
            k++;
                    
                }
                else{
            v.push_back("NO");
            k++;
                }

    }

    for (int i = 0; i < v.size();i++){
        if(v[i]=="YES"){
            cout << v[i] << endl;
            for (int j = 0; j < 3;j++){
                cout << b[j][0] << b[j][1] << b[j][2];
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}