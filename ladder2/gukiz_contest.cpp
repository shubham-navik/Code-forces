#include<bits/stdc++.h>
using namespace std;


struct test{
    int rating;
    int index;
    int rank;
};

void Rank(struct test test[],int n){
    for (int i = 1; i < n;i++){
        struct test key = test[i];
        int j = i - 1;

        while (j >= 0&& key.index<test[j].index){
            test[j + 1] = test[j];
            j--;
        }

        test[j+1] = key;
    }
}



void Sort(struct test test[],int n){
    for (int i = 1; i < n;i++){
        struct test key = test[i];
        int j = i - 1;

        while (j >= 0&& key.rating>test[j].rating){
            test[j + 1] = test[j];
            j--;
        }

        test[j+1] = key;
    }
}




int main(){
    int n;
    cin >> n;

    struct test test[n];
    for (int i = 0; i < n;i++){
        cin >> test[i].rating;
        test[i].index = i + 1;
        test[i].rank = 0;
    }

    Sort(test, n);

    // for (int i = 0; i < n;i++){
    //     cout << test[i].rating<<" ";
        
    // }

    int count = 1;
    int con = 0;

    test[0].rank = 1;
    for (int i = 1; i < n;i++){
        if(test[i].rating==test[i-1].rating){
            test[i].rank = count;
           
        }
        else{
            count = i+1;
            test[i].rank = count;
        }
    }

//    Sort(test, n);
    Rank(test, n);
    for (int i = 0; i < n;i++){
        cout <<test[i].rank <<" ";
    }

}