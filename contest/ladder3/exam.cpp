#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int arr[m];
    // memset(arr, 0, m);
    for (int i = 0; i < m;i++){
        arr[i] = 0;
    }

        while (n > 0)
        {
            for (int i = 0; i < m; i++)
            {
                if (n > 0)
                {
                    arr[i]++;
                    n--;
                }
                else{
                break;
            }
        }
    }
    int count = 0;

    for (int i = 0; i < m;i++){
        if(arr[i]==2){
            count++;
        }
    }
    cout << count;
}