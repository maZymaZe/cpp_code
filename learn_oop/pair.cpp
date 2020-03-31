#include<iostream>
using namespace std;
int main(){
	pair<int,double> p1;
	cout<<p1.first<<' '<<p1.second<<endl;
	pair<int,string> p2;
	p2=make_pair(200,"hello");
	cout<<p2.first<<' '<<p2.second<<endl;
	return 0;
} 
