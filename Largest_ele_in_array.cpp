#include<bits/stdc++.h>
using namespace std;

int largest_ele(int arr[],int n){
int largest =0;
for (int i=0;i<n;i++){
    if(arr[i]<arr[i+1]){
        largest = i+1;
    }
} cout<<largest;

}

int main(){
    int arr[]={10,50,20,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    largest_ele(arr,n);
    return 0;
}