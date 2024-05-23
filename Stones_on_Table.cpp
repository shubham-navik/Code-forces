    #include<iostream>
    using namespace std;


    int main(){
        int num;
        cin >> num;
        char s[num];

        for (int k = 0; k < num;k++)
            cin >> s[k];

            
            int count = 0;

        for (int i = 1, j = 0;i<num; i++,j++){
            if(s[j]==s[i])
                count++;
        }

        cout << count;
    }