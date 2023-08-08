#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int low=0,high = n-1;
    while(low<high){
        int temp  = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}


int main(){
    int arr[] = {10,5,7,30};
    int n = sizeof(arr)/sizeof(arr[0]);

    //printing array in reverser
    // for (int i=n-1;0<=i;i--){
    //      cout<<arr[i]<<" ";
    // } 
    reverse(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    

    return 0;
}