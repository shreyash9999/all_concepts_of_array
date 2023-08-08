#include<bits/stdc++.h>
using namespace std;

int main(){
    int k =2;
    vector <int > v={20,30,40,50,60};
    vector<int>temp (v.size());
    for (int i=0;i<v.size();i++){
        temp[(i+k)%v.size()]=v[i];
    } 
    
    for(auto x:temp)cout<<x<<"\n";


    return 0;
}