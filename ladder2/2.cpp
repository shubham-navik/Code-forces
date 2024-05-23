#include<bits/stdc++.h>
using namespace std;


int main(){
    char s1[500], s2[500], s3[500];
    gets(s1);
    gets(s2);
    gets(s3);

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < strlen(s1);i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'  )
            count1++;
    }
    for (int i = 0; i < strlen(s2);i++){
        if(s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u'  )
            count2++;
    }
    for (int i = 0; i < strlen(s3);i++){
        if(s3[i]=='a' || s3[i]=='e' || s3[i]=='i' || s3[i]=='o' || s3[i]=='u'  )
            count3++;
    }

    // cout << count1 << " " << count2 << " " << count3;

    if(count1==5 && count2==7 && count3==5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}