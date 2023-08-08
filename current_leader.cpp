#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,b)   for(int i=a-2;i>=b;i--)

int current_leader(int arr[],int n){
    int curr_led = arr[n-1];
    cout<<curr_led<<" ";
    for(int i=n-2;i>=0;i--){
        if(curr_led < arr[i]){
            curr_led=arr[i];
            cout<<curr_led<<" ";
        }
    }
   
}

int main(){
    int arr[] = {7,10,4,10,6,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

   current_leader(arr,n);
    
    return 0;
}