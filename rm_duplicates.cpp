#include<bits/stdc++.h>
using namespace std;

//common solution(naive)
int rm_dup(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res =1;
    for(int i=1;i<n;i++){
        if(temp[res-1] != arr[i]){
            temp[res] = arr[i];
            res ++;
        }
    }
    for (int i=0;i<res;i++){
        cout<<temp[i]<<" ";
    }

}

//more efficient solution O(n)time, O(1)space
int rm_dup_eff(int arr[],int n){
    int res = 1;
    for (int i=1;i<n;i++){
        if(arr[i] != arr[res-1 ]){
            arr[res]= arr[i];
            res++;
        }
    }

    for(int i;i<res;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n,value;
   
    cout<<"Enter size of array: "<<"\n";
    cin>>n;
    int  arr[n];

    for (int i=0;i<n;i++){
        cin>>value;
        arr[i]=value;
    }
    rm_dup_eff(arr,n);
    
    return 0;
}