#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1-x2==0){
        cout << x1 + abs(y2 - y1) << " " << y1 << " " << x2 + abs(y2 - y1) << " "<< y2;
        return 0;
    }
    if(y1-y2==0){
        cout << x1<< " " << y1 +abs(x1-x2)<< " " << x2 << " "<< y2+abs(x1-x2);
        return 0;
    }
    if(abs(x2-x1)==abs(y1-y2)){
        // if(x2>x1 ){
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
        return 0;
      
       
    }
    else{
        cout << -1;
        return 0;
    }
}