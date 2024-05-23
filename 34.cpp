#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < 7;i++)
        cin >> arr[i];

    int count = 0;
    // int sum = 0;
    int i = 0;
    while (0 < n)
    {  count++;
        n = n - arr[i % 7];

        i++;
  }
if(count%7==0){
        cout << 7;
        return 0;
}
  cout << count%7;
}