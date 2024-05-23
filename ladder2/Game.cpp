#include<bits/stdc++.h>
using namespace std;

int main(){

    cout << "Let's play a game Guess correct number" << endl;
    srand(time(0));
    int n =1+ rand()%100;
    int count = 0;
    int num;

    do{
        cout << "Emter a number  " ;
        cin >> num;
        if(num==n){
            // count++;
            break;
        }
        else if(num>n){
            count++;
            cout << "Enter less number" << endl;
        }
        else{
            count++;
            cout << "Enter greater number" << endl;
        }
    } while (n != num);

    cout << "Your are champion with accuracy - " << 100 - count<<" %";
}