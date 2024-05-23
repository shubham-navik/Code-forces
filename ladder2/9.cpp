#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s1, s2;
    cin >> s1>> s2;
   

        int count = 0;
        int i = 0;
        while(i<n){
            int m = abs((s1[i] -0)- (s2[i]-0));
                    // cout << m;
                    if(m<=5){
                        count = count + m;
                    }
                    else{
                        count = count + 9-m+1;
                    }
                  i++;
                }

            cout << count;

            // int n = 'a' + 0;
            // cout << n;
}