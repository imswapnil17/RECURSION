#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n,int i){
    if(i>n){
        return;
    }
    cout<<arr[i]<<endl;
    printArray(arr,n,i+1);

}
void reverseFunction(int i, int arr[] ,int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverseFunction(i+1,arr,n);
}
int main(){
    int arr[] = {3,4,6,21,4};
    int n =(sizeof(arr)/sizeof(int));
    reverseFunction(0,arr,n);
    printArray(arr,n,0);
    return 0;
}



//Perndoma check using Recursion
// #include <bits/stdc++.h>
// using namespace std;
// int f(int i,string &s){
//     if(i>=s.size()/2) return true;
//     if(s[i] !=s[s.size()-i-1]){
//         return false;
//     }
//     return f(i+1,s);
// }
// int main(){
//     string s = "MAAM";
//     cout<<f(0,s);
    
//     return 0;
// }