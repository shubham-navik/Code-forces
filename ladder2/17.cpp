#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    
    if (n==0)
    {
       cout << "O-|-OOOO"<<endl;
       return 0;
    }
    
  while (n!=0)
  {
      int d = n % 10;
      if (d==0)
      {
          cout << "O-|-OOOO"<<endl;
      }
       if (d==1)
      {
          cout << "O-|O-OOO"<<endl;
      }
       if (d==2)
      {
          cout << "O-|OO-OO"<<endl;
      }
       if (d==3)
      {
          cout << "O-|OOO-O"<<endl;
      }
       if (d==4)
      {
          cout << "O-|OOOO-"<<endl;
      }
       if (d==5)
      {
          cout << "-O|-OOOO"<<endl;
      }
       if (d==6)
      {
          cout << "-O|O-OOO"<<endl;
      }
       if (d==7)
      {
          cout << "-O|OO-OO"<<endl;
      }
       if (d==8)
      {
          cout << "-O|OOO-O"<<endl;
      }
       if (d==9)
      {
          cout << "-O|OOOO-"<<endl;
      }
      n /= 10;
  }
  
    
    return 0;
}
