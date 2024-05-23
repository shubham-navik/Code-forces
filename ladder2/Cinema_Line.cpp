#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count25 = 0;
    int count50 = 0;

    int arr[n];
    for (int i = 0;i<n;i++)
        cin >> arr[i];

        if(arr[0]>25){
        cout << "NO";
        return 0;
        }

        else{

            for (int i = 0; i < n;i++){
                if(arr[i]==25){
                    count25++;
                }
                if(arr[i]==50){
                    if(count25>0){
                        count25--;
                        count50++;
                    }
                    else{
                        cout << "NO";
                        return 0;
                    }
                }

                if (arr[i]==100){
                    if(count25>0 && count50>0){
                        count25--;
                        count50--;
                    }

                    

                    else{
                        if(count25>=3){
                            count25 = count25 - 3;
                        }

                        else{

                        cout << "NO";
                        return 0;
                        }
                    }
                }
            }

            cout << "YES";
        }
}
