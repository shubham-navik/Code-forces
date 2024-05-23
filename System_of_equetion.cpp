
// Accepted


#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int count = 0;

    for (int i = 0; i <= (n > m ? n : m);i++){
        for (int j = 0; j <= (n > m ? n : m);j++){

            if(((i*i+j)==(n > m ? n : m)) && ((i+j*j)==(n < m ? n : m)))
                count++;
        }
    }

    cout << count;
}