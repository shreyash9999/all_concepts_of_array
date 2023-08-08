#include<bits/stdc++.h>
using namespace std;


//two traversal solutions
// int second_largest(int arr[], int n){
//     int largest=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<arr[i+1]){
//             largest = i+1;
//         }
//     }
//     for(int j=largest;j<n-1;j++){
//         arr[j]=arr[j+1];
//     }
//     int sec_largest=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<arr[i+1]){
//             sec_largest = i+1;
//         }
//     }cout<<arr[sec_largest];
// }

int second_largest(int arr[], int n){
    int largest =0,res=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest = i;
        }else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i]>arr[res]){
                res = i;
            }
        }
    }cout<< res;
}

int main(){
    int arr[]={95,20,90,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);

    second_largest(arr,n);
    return 0;
}