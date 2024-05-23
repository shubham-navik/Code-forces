#include<bits/stdc++.h>
using namespace std;

#define yes YES
#define no NO

int main(){
    int n;
    cin >> n;

    int sum1 = 0;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        if(arr[i]==100){
            sum1++;
        }
    }


if(n%2!=0){
    if(sum1==0){
            cout << "NO";
            return 0;
    }
    else{
        if(sum1%2==0){
            cout << "YES";
            return 0;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
}

else{
    if(sum1%2==0){
        cout << "YES";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }
}

}