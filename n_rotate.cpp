#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b)    for(int i=a;i<=(b);i++)

void reverse(int arr[],int low,int high){
    
    while(low<high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void rotate(int arr[],int n, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}


int main(){
    int arr[] = {10,5,7,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d=2;
    
    rotate(arr,n,d);

    f(i,0,n){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}