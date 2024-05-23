#include<bits/stdc++.h>
using namespace std;

int main(){
   long long int n;
    cin >> n;
    long long int a[n], b[n];

    for (int i = 0; i < n;i++){
        cin >> a[i] >> b[i];

    }

    int count_1 = 0, count_2 = 0;
    for (int i = 0; i < n;i++){
        if(a[i]>0){
            count_1++;
        }
        else{
            count_2++;
        }
    }

    if(count_1<=1 &&count_2>=1 || count_2<=1 &&count_1>=1){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}