#include<bits/stdc++.h>
using namespace std;


struct shubham{
    int worm;
    int index;
};

void sort_shubham(shubham shubham[],int size){
    for (int i = 1; i < size;i++){
       struct shubham temp = shubham[i];
        int j = i - 1;

        while (j >= 0 && temp.worm<shubham[j].worm){
            shubham[j + 1] = shubham[j];
            j--;
        }
        shubham[j + 1] = temp;
    }
}

int main(){
    int n;
    cin >> n;

    struct shubham shubham[n];
    for (int i = 0; i < n;i++){
        cin >> shubham[i].worm;
        shubham[i].index = i + 1;
    }

    sort_shubham(shubham, n);

    // for (int i = 0; i < n;i++)
    //     cout << shubham[i].index << " ";

    // for (int i = 2; i < n;i++){
    //     if(shubham[i].worm==shubham[i-1].worm+shubham[i-2].worm){
    //         cout << shubham[i].index << " " << shubham[i - 1].index << " " << shubham[i - 2].worm;
    //         return 0;
    //     }
    // }
    // cout << -1;

    for (int i = 0; i < n - 2;i++){
        for (int j = i + 1; j < n - 1;j++){
            for (int k = j + 1; k < n;k++){
                if(shubham[k].worm==shubham[j].worm+shubham[i].worm){
                    // cout << k+1 << " " << j+1 << " " << i+1;
            cout << shubham[k].index << " " << shubham[j].index << " " << shubham[i].index;
                    
                    return 0;
                }
            }
        }
    }
    cout << -1;
    return 0;
}