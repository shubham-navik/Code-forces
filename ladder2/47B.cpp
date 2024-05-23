#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct shu{
    char c;
    int freq;
};


// void shuham(struct  a[]){
//     for (int i = 1; i < 3;i++){
//         // struct key = a;
//     }
// }

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    // cout << s1 <<"-"<< s2 << "-"<<s3;
    struct shu sh[3];
    for (int i = 0; i < 3;i++){
        sh[i].c = 'A';
        sh[i].freq = 0;
    }

    if(s1[1]=='>'){
        for (int i = 0; i < 3;i++){
            if(sh[i].c==s1[0]){
                sh[i].freq++;
            }
        }
    }
    else{
        for (int i = 0; i < 3;i++){
            if(sh[i].c==s1[2]){
                sh[i].freq++;
            }
        }
    }
    if(s3[1]=='>'){
        for (int i = 0; i < 3;i++){
            if(sh[i].c==s3[0]){
                sh[i].freq++;
            }
        }
    }
    else{
        for (int i = 0; i < 3;i++){
            if(sh[i].c==s3[2]){
                sh[i].freq++;
            }
        }
    }
    if(s3[1]=='>'){
        for (int i = 0; i < 3;i++){
            if(sh[i].c==s3[0]){
                sh[i].freq++;
            }
        }
    }
    else{
        for (int i = 0; i < 3;i++){
            if(sh[i].c==s3[2]){
                sh[i].freq++;
            }
        }
    }

    // ssort(sh, 3);
    // shubham(sh);
    
    return 0;
}