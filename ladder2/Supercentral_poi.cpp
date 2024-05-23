#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n;i++){
        cin >> x[i] >> y[i];
    }

    int count = 0;
    for (int i = 0; i < n;i++){
    int flag1 = 0, flag2 = 0;
   int flag3 = 0, flag4 = 0;
        int X = x[i];
        int Y = y[i];
        for (int j = 0; j < n;j++){
            if(X==x[j]){
                if(y[j]>Y)
                    flag1 = 1;
                    
                 if(y[j]<Y)
                    flag2 = 1;
            }
            if(Y==y[j]){
                if(x[j]>X)
                    flag3 = 1;
                    
                 if(x[j]<X)
                    flag4 = 1;
            }

            
        }

        if(flag1>0 && flag2>0 && flag3>0 && flag4>0){
            count++;
        }
    }

    cout << count;
    return 0;
}
