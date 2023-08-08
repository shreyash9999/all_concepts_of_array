#include<bits/stdc++.h>
using namespace std;

int max(vector <int> &v,int n){
    cout<<*max_element(v.begin(),v.end())<<endl;
}

int min(vector<int> &v, int n){
    cout<<*min_element(v.begin(),v.end());
}

int main(){
    vector<int> v={20,90,30,10,50};
    int n= v.size();
    max(v,n);
    min(v,n);
    
    return 0;
}