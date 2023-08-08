#include<bits/stdc++.h>
using namespace std;

int reverse(vector <int> &v,int n){
    reverse(v.begin(),v.end());
    // for(auto x:v) cout<<x<<" ";
}

int main(){
    
    vector <int> v;
    int n,value;
    cout<<"Enter size of vector: "<<"\n";
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>value;
        v.push_back(value);
    }
    reverse(v,n);


    for (int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    

    


    return 0;
}