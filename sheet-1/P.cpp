    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    
    
    int main(){
        int a;
        cin >> a;
        int x = a / 1000;
        if(x%2 == 0)
            cout << "EVEN\n";
            else{
                cout << "ODD\n";
            }
        return 0;
    }