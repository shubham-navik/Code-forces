#include<iostream>
using namespace std;

int isDistinct(int num){
    bool count[10];


    for (int i = 0; i < 10;i++)
        count[i] = 0;

    while(num>0){

        if(count[num%10]==1)
            return false;

      else {
                count[num % 10] = 1;

                num =num/ 10;
        }
        
    }
    return true;
}


int main(){
    int num;
    cin >> num;
    if (num >= 1000 && num <= 9000)
    {
        num += 1;
        while (!isDistinct(num))
        {
            num++;
        }
        cout << num;
  }

else{
    cout << "Invalid number  !";
}
  
   return 0;
}