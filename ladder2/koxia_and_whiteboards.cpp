#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int> a(n+m);
		for(int i=0;i<n+m;i++)
		cin>>a[i];
		sort(a.begin(),a.end()-1);
		long long ans=0;
		for(int i=n+m-1;i>=m;i--){
			ans+=a[i];
		}
		cout<<ans<<endl;
	}
}