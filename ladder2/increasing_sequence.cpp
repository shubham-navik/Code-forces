//4264920   Aug 11, 2013 12:53:46 PM	fuwutu	 11A - Increasing Sequence	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long  int n, d, b0, b, moves(0);
  cin >> n >> d >> b0;
  while (--n)
  {
    cin >> b;
    if (b <= b0)
    {
        long long int x = (b0 - b) / d + 1;
        moves += x;
        b0 = b + x * d;
      }
      else
      {
          b0 = b;
      }
    }
    // printf("%d\n", moves);
    cout << moves;
    return 0;
}