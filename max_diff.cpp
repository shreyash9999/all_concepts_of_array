#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,b)   for(int i=a-2;i>=b;i--)

int max_diff(int arr[],int n){
    int res  = arr[1]-arr[0];
    int minval = arr[0];

    for(int j=1; j<n; j++){
        res = max(res,arr[j]-minval);
        minval = min(minval,arr[j]);
    }
    return res;

   
}

int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<max_diff(arr,n);
    
    return 0;
}