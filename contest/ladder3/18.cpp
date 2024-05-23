#include<bits/stdc++.h>
using namespace std;

int shubham(int n,int m){

    int i = 1;

    while(m>=0){

     if(i<=n)  {
         if(m>=i){
            m = m - i;
            i++;
        }
        else{
            break;
        }
        }


        else{
        i = 1;
        // m = m - 1;
        }

    }
    return m;
}


int main(){
    int n,m;
    cin >> n >> m;

    cout << shubham(n, m);
}