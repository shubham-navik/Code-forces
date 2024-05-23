#include<bits/stdc++.h>
using namespace std;


long long int remove_zeros(long long int n)
{
    
    long long int r, num = 0;
    // removing zeros from n and storing the number in num
    while(n > 0)
    {
        r = n % 10;
        n = n / 10;
        if(r!=0)
        {
            num = num*10 + r;
        }
    }
    
    // we need to reverse num to obtain final answer since the above loop
    // stores digits in num in reverse order
    n = num;
    num = 0;
    while(n>0)
    {
        r = n % 10;
        n = n / 10;
        num = num*10 + r;
    }
    
    return num;
    
}

int main(){
    long long  int a, b, c;
    cin >> a >> b;

    c = a + b;
   long long  int x = remove_zeros(a);
   long long  int y = remove_zeros(b);
   long long  int z = remove_zeros(c);

if(x+y==z){
        cout << "YES";
}
else{
        cout << "NO";
}

}