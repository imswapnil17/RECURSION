// first self-made problem. Less goo !!
#include <bits/stdc++.h>
using namespace std;

void f2(int n , int arr[]){
    int i =0;
    if(i>n) return;
    if(arr[i+1]>arr[i]) swap(arr[i+1],arr[i]);
    f2(i+1,arr);
}

void f(int i ,int arr[]){
    int didSwap =0;
    if(i<0) return;
    for(int j =0;j<i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j+1],arr[j]);
            didSwap =1;
    }
    }
    if(didSwap==0) return;
    f(i-1,arr);  
}
int main(){
    int n;
    cin>>n;
    int i =n-1;
    int arr [n] = {4,62,5,54};
    f2(i,arr);
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}