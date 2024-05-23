#include<iostream>
using namespace std;

int same(int arr[],int n){
    int m = 0;
    for (int i = 0; i < n-1;i++){
        if(arr[i]==arr[i+1]){
            m++;
        }
    }
    if(m+1==n){
        return m + 1;
    }
    else{
        return 0;
    }
}


int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];
        int count = 0;
    if (same(arr, n) == n)
    {
        cout << "0";
        return 0;
  }
  else{

      int m = n;

      while (m > 1)
      {

          int temp = arr[k - 1];
          for (int j = 0; j < n - 1; j++)
          {
              arr[j] = arr[j + 1];
          }
          arr[n - 1] = temp;
        //   for (int i = 0; i < n;i++)
        //       cout << arr[i] << " ";

              if (same(arr, n) == n)
              {
                  cout << count+1;
                  return 0;
              }
              else
              {
                  count++;
                  m--;
              }

        }
    }
   if(count<n-1){
       cout << count;
   }
   else{
       cout << "-1";
   }

  
  }



    