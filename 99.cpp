// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int a[1000], b[1000];

//     for (int i = 0; i < n;i++){
//         cin >> a[i];
//         cin >> b[i];
//     }

//     int count = 0;
//     for (int i = 0; i < n;i++){
//         if(a[i]==b[i]){
//             count++;
//         }
//     }

//     cout << count;

// }
#include<iostream>
using namespace std;

int main()
{
    int n, a[1000],b[1000];
    cin>>n;

  for (int i = 0; i <n; i++)
  {
    cin>>a[i]>>b[i];
  }
  
  int count =0;
  for (int i = 0; i <n; i++)
  {
  for (int j = 0; j <n; j++)
  {
   if (a[i]==b[j]&& i==j)
   {
       count++;
   }
   
  }
  
  }
  cout<<(n-count);

    return 0;
}