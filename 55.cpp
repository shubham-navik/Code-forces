#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i, j, k=0;

    for (int i = 1; i <= 2*n+1;i++){
        i <= n+1 ? k++ : k--;
        int m = 0;
        for (int j = 1; j <= 2*n+1;j++){
            if(j<=n+k && j>=n+2-k){
                if(j<=n+1){

                    cout << m;
                    m++;
                    if(j==n+k){
                        break;
                    }
                }
                else{
                    m--;
                    cout << m - 1;
                }
            }
            else{
                
                cout << " ";
            }

        }
        cout << "\n";
    }

        return 0;
}
