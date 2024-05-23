#include<iostream>
using namespace std;

int isLucky(long long int num){
     int count[10];


    for (int i = 0; i < 10;i++)
        count[i] = 0;

        while(num>0){
            count[num % 10]++;
            num /= 10;
        }
   if(count[4]+count[7]==4 ||count[4]+count[7]==7)
       return 1;
       else
           return 0;

        
        return 0;
} 


int main(){
    long long int num;
    cin >> num;
    if(isLucky(num)){
        cout << "YES";

    }
    else{
        cout << "NO";
    }
}