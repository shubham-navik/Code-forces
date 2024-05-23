#include<iostream>
using namespace std;
 
int main(){
    string s;
    cin >> s;
 
    int count = 0;
    int flag = 0;
 
   if(s.length()>=7){
                        for (int i = 0; i < s.length() - 6; i++)
                        {
                            for (int j = i; j <i+7; j++){
                                if(s[i]==s[j]){
                                    count++;
                                    if(count==7){
                                        flag = 1;
                                        break;
                                        
                                    }
                                    else{
                                        continue;
                                    }
                                }
                                else{
                                    count = 0;
                                }
                            }
                        }
 
 
                    if(flag==1)
                        cout << "YES";
                        else
                            cout << "NO";
                            
   }
 
 
 
 
   else
       cout << "NO";
 
    return 0;
}