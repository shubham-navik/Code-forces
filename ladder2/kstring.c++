#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int k;
    cin >> k;
    string s;
    cin >> s;

    int count[150];
    for (int i = 0; i <150; i++)
    {
        count[i] = 0;
    }

     static int B[150];
    for (int i = 0; i <150; i++)
    {
        B[i] = 0;
    }

    for (int  i = 0; i <s.length(); i++)
    {
        count[s[i]]++;
    }
    //  for (int  i = 90; i <130; i++)
    // {
    //     cout << count[i] << " ";
    // }


  for(int i=65;i<150;i++){
    if(count[i]%k!=0){
        cout << -1;
        return 0;
    }
  }

    for (int  i = 0; i <150; i++)
    {
        B[i] = count[i] / k;
    }

  int m = s.length();
  int a = s.length() / k;

  while (m > 0)
  {
    for (int i = 65; i < 150; i++)
    {
        if (count[i] > 0)
        {
            int b = 0;
            for (int j = 0; j <B[i]; j++)
            {
                cout << char(i);
                b++;
            }
            count[i] = count[i] - B[i];
        }
    }
    m = m - a;
  }

    return 0;
}
