#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n;i++){
        cin >> a[i] >> b[i];
    }
    int count = 0;
    int countx = 0;
    int countx1 = 0;
    int countx2 = 0;
    int county = 0;
    int county1 = 0;
    int county2 = 0;

    for (int i = 0; i < n;i++){

        for (int j = 0; j < n;j++){
            if(a[i]==a[j] && i!=j){
                
                if(b[i]>b[j]){
                    county1++;
                }
                if(b[i]<b[j]){
                    county2++;
                }

            }
        }
    
    }
    for (int i = 0; i < n;i++){

        

       for (int j = 0; j < n;j++){
            if(b[i]==b[j] && i!=j){
            
                if(a[i]>a[j]){
                    countx1++;
                }
                if(a[i]<a[j]){
                    countx2++;
                }

            }
        }
    
    }



        if( county2>=1 && county1>=1 && countx2>=1 && countx1>=1){
            count++;
        }

    cout << count;
}