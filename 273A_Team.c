#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count[n];
    int arr[1000][3];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 3;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n;i++){
        count[i] = 0;
        for (int j = 0; j < 3;j++){
            if(arr[i][j]==1){
                count[i]++;
            }

        }
    }

    int m = 0;
    for (int i = 0; i < n;i++){
        if(count[i]>=2)
            m++;
    }

    printf("%d ", m);

    return 0;
}