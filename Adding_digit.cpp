#include<iostream>
using namespace std;


long long int fun(long long int a,long long int b,long long int n){


    while(n>0){
        a = a * 10;
        int p = a;
        for (int i = 0; i < 10;i++){
            a = p + i;

            if(a%b==0){
                break;
            }
        }
    
        if(a%b!=0){
            return -1;
        }
        else{
            n--;
         
        }
     
    }

    return a;
}

int main(){
   long long int a, b, n;
    cin >> a >> b >> n;
    cout<<fun(a, b, n);
}