#include<bits/stdc++.h>
using namespace std;

void L_rotate(int arr[],int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }arr[n-1]=temp;
   
}

int main(){
    int arr[] = {8,5,0,10,0,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    L_rotate(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}