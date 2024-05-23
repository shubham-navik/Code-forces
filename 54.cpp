#include<iostream>
using namespace std;

void swap(int *a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void  fun(int arr[],int n){
    if(n==1){
        // cout << arr[1];
        return ;
        // exit;
    }
    swap(&arr[n - 1], &arr[n]);


     fun(arr, n - 1);

}



int main(){

    int n;
    cin >> n;
    int arr[n+1];

    for (int i = 1; i <= n ;i++)
        arr[i] = i;

        fun(arr, n);
        for (int i = 1; i <= n ;i++)
            cout << arr[i]<<" ";
}