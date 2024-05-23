#include<iostream>
using namespace std;


int notprime(int n){

    for (int i = 2; i < n;i++){
        if(n%i!=0)
            // return 0;
            continue;
            else
                return 1;
    }

    return 0;
}


int Nextprime(int n){
    n++;
    while (notprime(n))
    {

        n++;
  }
  return n;
}

int main(){

    int n, m;
    cin >> n >> m;

    if(m==Nextprime(n))
        cout << "YES";
        else
            cout << "NO";

    return 0;
}