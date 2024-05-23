#include<iostream>
using namespace std;

int main(){
    int v[100][3];
    int n;
    cin >> n; //no of forces
    for (int i = 0; i < n;i++){ //looop for enter force  cordinate
        for (int j = 0; j < 3;j++){
            cin >> v[i][j];
        }
    }

    int sum_x, sum_y, sum_z;//variable for store sum of respective cordinate
    sum_x = sum_y = sum_z = 0;

    for (int i = 0; i < n;i++){
        sum_x += v[i][0];//store for sum x cordinate
        sum_y += v[i][1];//store for sum y cordinate
        sum_z += v[i][2];//store for sum z cordinate
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) // Force equilibrium condition;
        cout << "YES"<<endl;
        else
            cout << "NO" << endl;
}