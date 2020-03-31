#include<cstring>
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
//	string s="hello";
/*	cout<<find(s.begin(),s.end(),"o")<<endl;*/
	list<int> l1;
	l1.push_back(2);
	l1.push_back(3);
	l1.push_back(1);
	l1.push_back(5);
	l1.push_back(6);
	l1.push_back(4);
	if	(find(l1.begin(),l1.end(),7)==l1.end()){
		cout<<"yes"<<endl;
	}
//	cout<<(find(l1.begin(),l1.end(),7))<<endl;
//	cout<<l1.end()<<endl;
	printf("%d\n",find(l1.begin(),l1.end(),4));
	printf("%d\n",l1.end());
	cout<<*(l1.end())<<' '<<*(l1.begin())<<endl;
	printf("%d\n",*(l1.end()));
	
	int a[4]={10,20,30,40};
	cout<<(*(find(a,a+4,30)))<<endl;
	
	return 0;
} 
