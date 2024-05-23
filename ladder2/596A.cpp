#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n], y[n];
    int a;
    for (int i = 0; i < n;i++){
        cin >> x[i] >> y[i];
    }
        if (n == 1)
        {
            cout << -1 << endl;
            return 0;
        }
        else if (n == 2)
        {
            if ((x[0] -x[1])==0 || (y[0] - y[1])==0)
            {
                cout << -1 << endl;
                return 0;
            }
            else{
                cout << (abs(x[1] - x[0]) * abs(y[1] - y[0]))<<endl;
                return 0;
        }
    }
    
    else{
        sort(x, x + n);
        sort(y, y + n);
         a = abs(x[0] - x[n - 1]) * abs(y[0] - y[n - 1]);
    }

    if (a){
         cout << a << endl;
    }
    else{
         cout << -1 << endl;
    }
}