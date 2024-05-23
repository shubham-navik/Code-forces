// The longest common subsequence in C++

// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

void lcsAlgo(string S1, char *S2, int m, int n) {
  int LCS_table[m + 1][n + 1];


  // Building the mtrix in bottom-up way
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (S1[i - 1] == S2[j - 1])
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      else
        LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
    }
  }

  int index = LCS_table[m][n];

if(index==5){
    cout << "YES";

}
else{
    cout << "NO";
}

}

int main() {
  string s;
  cin >> s;

  char S2[] = "hello";
  int m =s.length();
  int n = strlen(S2);

  lcsAlgo(s, S2, m, n);
}