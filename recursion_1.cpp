#include <bits/stdc++.h>
using namespace std;
int s = 0;
void f(){
    if (s == 10){
        return ;
    }
    cout<<s<<endl;
    s++;
    
    f();
   
}
int main(){
    f();
    return 0;
}