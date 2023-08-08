#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,b)   for(int i=a-2;i>=b;i--)

int max_EO(int arr[],int n){
    int res=1,curr=1;
    for(int i=1;i<n;i++){
        	if((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0)
			   ||(arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
               {
            curr++;
            res =max(res,curr);

        }else{
            curr=1;
        }
        
    }return res;
}

int main(){
    int arr[] = {10,12,14,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<max_EO(arr,n);
    
    return 0;
}