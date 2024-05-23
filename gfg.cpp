//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
        // code here
        unordered_map<char, int> mp;
        for(char c:str){
            mp[c]++;
        }

        int cnt = 0;

        for(auto m:mp){
            if(m.second&1)
                cnt++;
        }

        if(cnt-k > 1)
            return 0;

        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends