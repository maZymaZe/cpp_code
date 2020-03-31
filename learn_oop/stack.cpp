#include<cstdio>
#include<stack>
#include<iostream>
using namespace std;
int main(){
	stack<int> s;
	s.push(1);
	cout<<s.top()<<endl;
	s.push(2);
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	s.pop();
	if(s.empty())cout<<"empty"<<endl;
	return 0;
}
