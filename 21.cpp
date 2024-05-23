#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

   long long int arr[4]={s1,s2,s3,s4};
   sort(arr, arr + 4);

   int count = 0;
   for (int i = 0; i < 4-1;i++){
    if(arr[i]==arr[i+1])
        count++;
   }

   cout << count;
}