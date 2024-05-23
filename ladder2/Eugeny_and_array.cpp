#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n, m;
    cin >> n >> m;
    long long int a[n],b[m],c[m];
    long long int count_ = 0;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        
    }
    for (int i = 0; i < m;i++)
        cin >> b[i] >> c[i];
 
    sort(a, a + n);
    // int count_1 = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==-1){
            count_++;
        }
        else{
            break;
            
        }
    }
 
     long long int count_1 = n - count_;
 
    for (int i = 0; i < m; i++)
    {  long long int x=abs(b[i]-c[i])+1;
        if(x%2==0){
            if (x/2<=count_1 && x/2<=n-count_1)
                cout << 1 << endl;
                else{
                cout << 0 << endl;
                }
        }
        else{
                cout << 0 << endl;
        }
    }
 
    return 0;
}