#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,b)   for(int i=a-2;i>=b;i--)

int feq(int arr[],int n){
    
   int feq = 1, i=1;
   while(i<n){
    while(i<n && arr[i]==arr[i-1]){
        feq++;
        i++;
    }
    cout<<(arr[i-1]+ " " +feq);
    i++;
    feq++;
   }
   if(n==1 || arr[n-1]!=arr[n-2]){
    cout<<arr[n-1]+ " "+ 1;
   }
}

int main(){
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<feq(arr,n);
    
    return 0;
}