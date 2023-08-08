#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector <int>v;
	
	int p1,p2,p3,p4;
	cin>>p1>>p2>>p3>>p4;
	v.insert(v.end(),{p1,p2,p3,p4});
    for (auto x:v)cout<<x;
	
	
	return 0;
}
