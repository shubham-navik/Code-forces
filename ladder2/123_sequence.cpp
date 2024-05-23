#include<bits/stdc++.h>
using namespace std;


int main(){
   long long int n;
    cin>>n;
    long long int count_1 = 0;
    long long int count_2 = 0;
    long long int count_3 = 0;
    while(n--){
        int a;
        cin >> a;
        if(a==1){
            count_1++;
        }
        if(a==2){
            count_2++;
        }
        if(a==3){
            count_3++;
        }
    }

    cout << min(count_1 + count_2, min(count_2 + count_3, count_1 + count_3));
}