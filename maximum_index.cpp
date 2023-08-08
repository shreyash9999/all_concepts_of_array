#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 15;
    int A[N]={65,6,74,94,56,89,9,63,75,25,34,68,93,48,16};
// 15
// 65 6 74 94 56 89 9 63 75 25 34 68 93 48 16
 int max_index,min_index,real;
    vector<int>v;
    for (int j=0;j<N;j++){
        min_index = j;
        
     for (int i=N-1;i>=0;--i){
         //cout<<A[i]<<" ";
        if(A[j] < A[i]){
            //cout<<i<<"\n";
            
            real = i;
            v.push_back(real);
            break;
        }
       
    }
        
    }
    for (auto x:v)cout<<x<<" ";
    cout<< *max_element(v.begin(),v.end());
            
            
    return 0;
}