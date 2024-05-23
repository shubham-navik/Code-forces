#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void shubham()
{
    long long int n;
    cin >> n;
    int x = n % 10;
    n = n / 10;
    x += n % 10;
    n = n / 10;
    x += n % 10;
    n = n / 10;

    int y = n % 10;
    n = n / 10;
    y += n % 10;
    n = n / 10;
    y += n % 10;

    if (x == y)
    {
        v.push_back("YES");
    }
    else
    {
        v.push_back("NO");
    }
 }
int main(){
    int t;
    cin >> t;

    while(t--){
        shubham();
    }

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }
}