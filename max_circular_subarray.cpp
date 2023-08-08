#include<bits/stdc++.h>
using namespace std;

int normal_max_sum(int arr[],int n){
    int res =arr[0], maxEnding = arr[0];
    for(int i=1;i<n;i++){
        maxEnding = max(arr[i],maxEnding+arr[i]);
        res= max(res,maxEnding);
    }
    return res;
}

int overallmaxSum(int arr[],int n){
    int max_normal = normal_max_sum(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum = 0;
    for(int i=0;i<n;i++){
        arr_sum += arr[i];
        arr[i] =-arr[i];
    }
int max_circular = arr_sum + normal_max_sum(arr,n);

return max(max_circular, max_normal);    
}

int main(){
    int arr[]={10,50,20,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<overallmaxSum(arr,n);
    return 0;
}