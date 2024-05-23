#include<iostream>
using namespace std;


void get (char* a){
    int i = 0;
    while(a[i]){
        if(a[i]=='.'){
            cout << "0";
        }
        if(a[i++]=='-'){
            if(a[i++]=='.')
                cout << "1";
                else
                    cout << "2";
        }
    }
} 


int main(){
  
    char a[200];
    for (int i = 0; i < 200;i++){
        cin >> a[i];
    }

        get(a);

    // for(int i=)
}