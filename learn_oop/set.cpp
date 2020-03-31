#include<iostream>
#include<set>
using namespace std;
int main(){
	int a[5]={2,1,6,4,3};
	set<int> st(a,a+5);
	set<int>::iterator s=st.begin();
	while(s!=st.end()){
		cout<<(*s)<<' ';
		s++;
	}
	cout<<endl;
	
	pair<set<int>::iterator,bool> rs;
	rs=st.insert(5);
	if(rs.second){
		cout<<*(rs.first)<<"insert successfully"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
	rs=st.insert(5);
	if(rs.second){
		cout<<*(rs.first)<<"insert successfully"<<endl;
	}
	else{
		cout<<"fail"<<endl;
	}
	pair<set<int>::iterator,set<int>::iterator> eg;
	eg=st.equal_range(3);
	cout<<*eg.first<<' '<<*eg.second<<endl;
	return 0;
}
