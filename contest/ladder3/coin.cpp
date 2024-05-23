#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec;

    int n;
    cin >> n;
    for (int i = n; i >= 1;i--){
        if(n%i==0){
            vec.push_back(i);
        }
    }

    for (int i = 0; i < vec.size();i++){
        cout << vec[i] << " ";
    }

    cout << "\n";
    int count = 0;
    for (int i = 0; i < vec.size();i++){
        for (int j = 0; j < i;j++){
            if(vec[i]%vec[j]==0){
                count++;
            }
            else{
                break;
            }
        }
        if(count>0){
            cout<<vec[i];
        }
    }
}