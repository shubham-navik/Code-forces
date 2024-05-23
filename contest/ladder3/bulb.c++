#include<bits/stdc++.h>
using namespace std;

int shubham(vector<int> vec,int count[],int m){
   m = m + 1;
    for (int i = 1; i <= m;i++){
       if(count[i]==0){
           return 0;
       }
    }
    return 1;
}


int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;

   vector<int> vec;
    while (n)
    {
        int x;
        cin>>x;
       
        for(int i=0;i<x;i++){
            int y;
            cin>>y;  
     vec.push_back(y);
        }
        n--;
    }

    int count[m + 1];
    for (int i = 1; i <= m;i++){
        count[i] = 0;
    }

    for (int i = 0; i < vec.size();i++){
        count[vec[i]] = 1;
    }

        if (shubham(vec, count, m)==1)
        {
     cout << "YES";
        }
        else{
        cout << "NO";
    }
        //   int mx=*max_element( vec.begin(), vec.begin()+ vec.size());
        //     int count[mx+1];
        //     for (int i = 0; i <=mx; i++)
        //     {
        //         count[i]=0;
        //     }

        // for (int i = 0; i <  vec.size(); i++)
        // {
        //     count[ vec[i]]++;
        // }

        // vector<int>arr2;
        // for (int i = 0; i <=mx; i++)
        // {
        //      if (count[i]>0)
        //      {
        //          arr2.push_back(i);

        //      }

        // }

        // sort(arr2.begin(),arr2.begin()+arr2.size());

        // if (arr2.size()==m)
        // {
        //      cout << "YES";
        // }
        // else
        // {
        //      cout << "NO";
        // }

        return 0;
}
