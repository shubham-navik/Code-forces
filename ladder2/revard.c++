#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[3];
    int b[3];
    
    for (int  i = 0; i <3; i++)
    {
        cin >> a[i];
    }
     for (int  i = 0; i <3; i++)
    {
        cin >> b[i];
    }

    int n;
    cin >> n;

    int suma = 0,sumb=0;
    for (int  i = 0; i <3; i++)
    {
        suma += a[i];
        sumb += b[i];
    }
 
 int temp1 = 0, temp2 = 0;

  if(suma % 5 == 0)
 {
    temp1 = suma / 5;
    }
    else
    {
    temp1 = suma / 5 + 1;
   }
    
     if(sumb % 10 == 0)
 {
    temp2 = sumb/ 10;
    }
    else
    {
    temp2 = sumb / 10 + 1;
   }
    
    if (temp1+temp2 <=n)
    {
    cout << "YES";
    }
    else
    {
    cout << "NO";
    }
    
    
    

  
    
    return 0;
}
