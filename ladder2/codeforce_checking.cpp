#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

ll t;
cin >> t;
set<char> s;
s.insert('c');
s.insert('o');
s.insert('d');
s.insert('f');
s.insert('r');
s.insert('e');
s.insert('s');

while(t--){
    char c;
    cin >> c;
    auto pos = s.find(c);
  if(pos!=s.end()){
      cout << "YES" << endl;
  }
  else{
      cout << "NO" << endl;
  }
}
}