// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct LER{
   long long int val;
    int pos;
};



 long long int compareTwoStudents(LER a, LER b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.val != b.val)
        return a.val < b.val;

    // return a.val;

    // // If marks in Maths are same then
    // // returns true for higher marks
    // if (a.math != b.math)
    //     return a.math > b.math;
 
    // if (a.phy != b.phy)
    //     return a.phy > b.phy;
 
    // return (a.che > b.che);
}
 
// Fills total marks and ranks of all Students
void computeRanks(LER *a, int n)
{
    // To calculate total marks for all Students
    // for (int i = 0; i < n; i++)
    //     a[i].total = a[i].math + a[i].phy + a[i].che;
 
    // Sort structure array using user defined
    // function compareTwoStudents()
    sort(a, a + n, compareTwoStudents);
 
    // Assigning ranks after sorting
 
}




int main(){
    int n;
    cin >> n;

    struct LER s[n];

    for (int i = 0; i < n;i++){
        cin >> s[i].val;
        s[i].pos = i + 1;
    }

    // sort(s,s+n,computeRanks);
    computeRanks(s, n);

    // for (int i = 0; i < n;i++){
    //     cout << s[i].val << " " << s[i].pos<<endl;
    // }



    if(s[0].val==s[1].val){
        cout << "Still Rozdil";
    }
    else{
        cout << s[0].pos;
    }
}