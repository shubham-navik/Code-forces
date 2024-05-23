#include<bits/stdc++.h>
using namespace std;


    int  maxi(int arr[], int n,int m){
 
        sort(arr,arr+m);
        int count = 0;
        while (n>0)
        {
            count += arr[m - 1];
            arr[m - 1]--;
            
            sort(arr,arr+ m);
            n--;
        }
        return count;
    }


    int mini(int arr[],int n,int m){
        int i = 0;
        sort(arr, arr + m);
        int val = 0;
        while(n--){
            if(arr[i]>0){
                val += arr[i];
                arr[i]--;
            }
            else{
                i++;
                n++;
            }
        }
        return val;
    }

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    int brr[m];
    int i = 0;

    for (int i = 0; i < m;i++)
           { cin >> arr[i];
            brr[i] = arr[i];
           }
            
            
            cout << maxi(arr, n, m)<<" "<<mini(brr,n,m);
            
    return 0;
}
