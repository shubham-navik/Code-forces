#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n, m,ans;

    cin >> n >> m;
    ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += (n + (i % 5)) / 5;
        }
        cout << ans;
        return 0;
    


    return 0;
}
