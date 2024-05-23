#include<iostream>
using namespace std;



int check( long long int a,int k){

    int count = 0;
    while(a>0){
        int r = a % 10;
        if(r==4 || r==7){
            count++;
        }
        a /= 10;
       
    }

    if(count<=k)
        return 1;
        else
        return 0;
}

int main(){
    int n, k;
    cin >> n >> k;

   long long int arr[n];

    int count[n];

    for (int i = 0; i < n;i++)
        cin >> arr[i];

    for (int i = 0; i < n;i++){
        if(check(arr[i],k))
            count[i] = 1;
            else{
        count[i] = 0;
    }
    }

    int count1 = 0;
    for (int i = 0; i < n;i++){
        if(count[i]>0){
        count1++;
        }
    }

    cout << count1;
}