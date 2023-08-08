#include<bits/stdc++.h>
using namespace std;

void move_zero_toend(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
   
}

int main(){
    int arr[] = {8,5,0,10,0,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    move_zero_toend(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}