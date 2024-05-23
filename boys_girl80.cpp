#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    char c[200];
    int i = 0;
    // int p = m + n;

    
    while(m+n>0){
        c[i] = 66;
        cout << c[i];
        i++;
        n--;
        if (m > 0){
            c[i] = 71;
            cout << c[i];
            i++;
            m--;
            
        }
    }







  
}