#include<stdio.h>

   long long int No_Of_Pave( long long int n,long long  int  m,long long int a){

    //   long long int x, y;
    if (n % a == 0)
    {
        n = n / a;
}
else{
    n= n / a + 1;
}

if (m%a==0)
{
    m= m/ a;
}
else{
    m= m/ a + 1;
}

return n * m;
// return (x * y);
}

int main(){
 long long int  n;

  long long int m;
   
  long long int a;
    // scanf("%lld %lld %lld ", &n, &m, &a);
  scanf("%lld", & n);
  scanf("%lld", & m);
  scanf("%lld", & a);

  long long int b = No_Of_Pave(n, m, a);
  printf("%lld", b);

  return 0;
}