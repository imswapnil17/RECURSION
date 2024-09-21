#include <bits/stdc++.h>
using namespace std;

void f(int n, int factorial){
    if(n<=1){
        cout<<factorial;
        return;
    }
    f(n-1,factorial*n);
}


int main(){
    f(5,1);
    return 0;
}