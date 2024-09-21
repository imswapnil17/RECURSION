#include <bits/stdc++.h>
using namespace std;

// FOR INVERSE PRINTING OF THE PATTERN 
// ex:- *****
//      ****
//      ***
//      **
//      *


// void f(int n){
//     if(n<=0){
//         return;
//     }
//     for(int i =0;i<n;i++){

//         cout<<"*";
//     }
//     cout<<'\n';
//     f(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     f(n);
//     return 0;
// }

// FOR LINEAR PRINTING PATTERNS 
// ex:-
// *
// **
// ***
// ****
// *****
void printspace(int space){
    if(space==0)return;
    cout<<" ";
    printspace(space-1);
}
void printn(int num){
    if(num==0)return;
    cout<<"*";
    printn(num-1);

}

void pattern(int n, int i)
{
    // base case
    if (n==0)
        return;
    printspace(n-1);
    printn(i-n+1);
    cout << endl;
 
    // recursively calling pattern()
    pattern(n - 1, i);
}
int main(){
    int n;
    cin>>n;
    pattern(n,n);
    return 0;
}

