#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
  
    int i,j,k=0,rows;

    scanf("%d",&rows);
    int n=(rows+1)/2;
    for(i=1;i<=rows;i++){
        if(rows%2==0){
            if(i<=n) k++;
            if(i>n+1) k--;
        }
        else
           i<=n?k++:k--;
        for(j=1;j<=rows;j++){
            if(j>=n+1-k&&j<=n-1+k){
            printf("D");
           
            }
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}