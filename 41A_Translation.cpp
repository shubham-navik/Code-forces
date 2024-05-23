#include<iostream>

// Accepted

using namespace std;

int isreverse(string s,string t){

    for (int i = 0; i < s.length();i++){
        if(s[i]==t[s.length()-1-i])
        continue;
        else
            return 0;
    }

    return 1;
}


int main(){
    string s, t;
    cin >> s >> t;

  
  if(isreverse(s,t))
      cout << "YES";
  else
  cout << "NO";

}