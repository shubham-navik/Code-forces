#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define y "yes"
#define n "NO"


int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if((a-b)%2==0){
            cout << y << endl;
        }
        else{
            if(a-b>=2)
                cout << y<<endl;
                else{
                cout << n<<endl;
                }
        }

    }
}
