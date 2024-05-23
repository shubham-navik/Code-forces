#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    int n;
cin>>n;

    char str[n][100];
    for (int i = 0; i <n; i++)
    {
      cin>>str[i];
    }
  for (int i = 0; i <n; i++)
  {
    if (strlen(str[i])>10)
  {
    cout<<str[i][0]<<strlen(str[i])-2<<str[i][strlen(str[i])-1]<<endl;
  }
  else{
    cout<<str[i]<<endl;
  }
  }
  
  
  
  
    
    return 0;
}