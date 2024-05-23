#include<bits/stdc++.h>
using namespace std;

struct shubham{
    int val;
    int index;
};

void sort(shubham arr[], int n){
    for (int i = 0; i < n;i++){
        shubham temp = arr[i];
        int k = arr[i].val;
        int j = i - 1;
        while(j>=0 && k<arr[j].val){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

    int main()
{
    int n;
    cin >> n;

    shubham arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i].val;
        arr[i].index = i + 1;
    }

    sort(arr, n);

    for (int i = 0; i < n / 2;i++){
        cout << arr[i].index << " " << arr[n - i - 1].index << endl;
    }
}