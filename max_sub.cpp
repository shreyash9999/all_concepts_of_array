#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,b)   for(int i=a-2;i>=b;i--)

int max_sub(int arr[],int n){
    int res =0;
    int max_ending  = arr[0];
    
    for(int i =1;i<n;i++){
        max_ending = max(max_ending+arr[i],arr[i]);
        res = max(res,max_ending);
    }return res;
   
}

int main(){
    int arr[] = {1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<max_sub(arr,n);
    
    return 0;
}