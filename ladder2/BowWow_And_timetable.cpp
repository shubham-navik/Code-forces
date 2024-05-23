

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define l(s)                      s.size()


int main()
{
    ll x;

    ll cnt=0,ans=0;
    string s;
    cin>>s;
    x=l(s);
    fr1(i, x)if(s[i]=='1')cnt=1;

    pfl(x/2 +cnt );

    return 0;
}