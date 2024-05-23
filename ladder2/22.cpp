#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int chest = 0;
    int biceps = 0;
    int back = 0;
    for (int i = 0; i < n;i++){
        if(i%3==0){
            chest += arr[i];
        }
       else if (i % 3 == 1){
            biceps += arr[i];

        }
        else{
            back += arr[i];
        }
    }

if(chest>biceps && chest>back){
    cout << "chest";
    return 0;
}
else if(biceps>chest && biceps> back){
    cout << "biceps";
    return 0;
}
else{
    cout << "back";
    return 0;
}

}