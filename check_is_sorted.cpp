#include<bits/stdc++.h>
using namespace std;


// bool check_sorted(int arr[],int n){
//     int flag=true;
//     for(int i=0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 flag = false;
//             }
//         }
//     }cout<< flag;
// }

//efficeient approach
bool check_sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }return true;
}

int main(){
    int arr[] = {10,20,30,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<check_sorted(arr,n);
    return 0;
}