#include<bits/stdc++.h>
using namespace std;


int rm_duplecates(int arr[],int n){
    
   int res = 1;
   for(int i=1;i<n;i++){
    if(arr[i]!=arr[res-1]){
        arr[res]= arr[i];
        res++;
    }
   }return res;
}

int main(){
    int arr[] = {10,20,20,30,30,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<rm_duplecates(arr,n);
    
    return 0;
}