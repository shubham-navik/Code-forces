#include<bits/stdc++.h>
using namespace std;


struct dr{
    int str;
    int pow;
};

 void A(struct dr d[],int size){
    for (int i = 1; i < size;i++){
        struct dr temp = d[i];
        int j = i - 1;
        while (j >= 0 && temp.str<d[j].str){
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = temp;
    }
 }
//  void sort(struct AS s[],int size){

//     for (int i = 1; i < size;i++){
//         // int k = s[i].finish;
//         struct AS temp = s[i];
//         int j = i - 1;
//         while(j>=0 && s[i].finish<s[j].finish){
//             s[j + 1] = s[j];
//             j--;
//         }
//         s[j + 1] = temp;
//     }
// }

int main(){
    int s, n;
    cin >> s >> n;

    struct dr d[n];
    for (int i = 0; i < n;i++){
        cin >> d[i].str >> d[i].pow;
        // cout << "\n";
    }

    // computeRanks(d, n);
    A(d, n);

    // for (int i = 0; i < n;i++){
    //     cout << d[i].str << " " << d[i].pow << endl;
    // }
        int count = 0;
    for (int i = 0; i < n;i++){
        if(s>d[i].str){
            s = s + d[i].pow;
            count++;
        }
        else{
            break;
        }
    }

    if(count==n){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}