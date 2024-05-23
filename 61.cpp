#include<bits/stdc++.h>
using namespace std;



long long int fact( long long int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}

  long long  int C( long long int n, int r)
{
    return (fact(n) / (fact(n - r) * fact(r)));
}

int main(){
    int n;
    cin >> n;
   long long  int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int x = abs(arr[0] - arr[n - 1]);
   long long int count1 = 0;
   long long int count2 = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]==arr[0]){
            count1++;
        }
        else{
            break;
        }
    }
    for (int i = n-1; i >=0;i--){
        if(arr[i]==arr[n-1]){
            count2++;
        }
        else{
            break;
        }
    }
    // long long int count3 = count1 * count2;
    if(x==0){
        cout << x << " " << C(count1, 2);
    }
    else{cout << x << " " << count1*count2;}
}