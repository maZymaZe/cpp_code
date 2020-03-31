#include<iostream>
#include<numeric>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(1); 
	v.push_back(2); 
	v.push_back(3); 
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
	return 0;
}
