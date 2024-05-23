#include<iostream>
using namespace std;

void sort(int *arr){
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int cut_ribbon(int n,int a,int b,int c){

    // int minimum = a;
    int arr[3]={a,b,c};
    sort(arr);

    if(n==(a+b+c))
        return 3;
     else if(n==(a+b) || n==(b+c) || n==(c+a)){
            return 2;

        }
       
     else {
        
        if(n%arr[0]==0){
            return n /arr[0];
        }
        if(n%arr[1]==0){
            return n / arr[1];
        }
        if(n%arr[2]==0){
            return n / arr[2];
        }
        else{
            return n / arr[0];
        }
     }
   
    
      
}




int main(){

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << cut_ribbon(n, a, b, c);
}