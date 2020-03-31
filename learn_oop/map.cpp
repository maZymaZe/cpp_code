#include<map>
#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	map<int,string> mp;
	mp.insert(make_pair(1,"a"));
	cout<<mp.begin()->first<<' '<<mp.begin()->second<<endl;
	mp.insert(make_pair(2,"b"));
	mp.insert(make_pair(5,"e"));
	mp.insert(make_pair(4,"d"));
	mp.insert(make_pair(3,"c"));
	map<int,string>::iterator m=mp.begin();
	while(m!=mp.end()){
		cout<<m->first<<' '<<m->second<<endl;
		m++;
	}
	return 0;
}
