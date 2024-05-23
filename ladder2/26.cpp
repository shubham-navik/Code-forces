#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int count_win_A = 0;
    int count_win_B = 0;
    int count_draw = 0;


if(abs(a-1)==abs(b-1))
    count_draw++;
    else{
        if(abs(a-1)<abs(b-1)){
            count_win_A++;
        }
        else{
            count_win_B++;
        }
    }
if(abs(a-2)==abs(b-2))
    count_draw++;
    else{
        if(abs(a-2)<abs(b-2)){
            count_win_A++;
        }
        else{
            count_win_B++;
        }
    }
if(abs(a-3)==abs(b-3))
    count_draw++;
    else{
        if(abs(a-3)<abs(b-3)){
            count_win_A++;
        }
        else{
            count_win_B++;
        }
    }
if(abs(a-4)==abs(b-4))
    count_draw++;
    else{
        if(abs(a-4)<abs(b-4)){
            count_win_A++;
        }
        else{
            count_win_B++;
        }
    }
if(abs(a-5)==abs(b-5))
    count_draw++;
    else{
        if(abs(a-5)<abs(b-5)){
            count_win_A++;
        }
        else{
            count_win_B++;
        }
    }
if(abs(a-6)==abs(b-6))
    count_draw++;
    else{
        if(abs(a-6)<abs(b-6)){
            count_win_A++;
        }
        else{
            count_win_B++;
        }
    }

    cout << count_win_A << " " << count_draw << " " << count_win_B << endl;
}