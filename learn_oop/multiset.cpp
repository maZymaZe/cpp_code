#include<iostream>
#include<set>
using namespace std;
int main(){
	int a[5]={2,1,6,4,3};
	multiset<int> st(a,a+5);
	multiset<int>::iterator s=st.begin();
	while(s!=st.end()){
		cout<<(*s)<<' ';
		s++;
	}
	cout<<endl;
	multiset<int>::iterator rs;
	rs=st.insert(5);
	cout<<*rs<<endl;
	st.insert(3);
	st.insert(3);
	st.insert(3);
/*	pair<multiset<int>::iterator,bool> rs;
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
	}*/
	s=st.begin();
	while(s!=st.end()){
		cout<<(*s)<<' ';
		s++;
	}
	cout<<endl;
	pair<multiset<int>::iterator,multiset<int>::iterator> eg;
	eg=st.equal_range(3);
	cout<<*eg.first<<' '<<*eg.second<<endl;
		s=st.begin();
	while(s!=st.end()){
		printf("%d ",s);
		s++;
	}
	cout<<endl;
	printf("%d\t%d\n",eg.first,eg.second);
	cout<<st.count(3)<<endl;
	st.erase(--s);
		s=st.begin();
	while(s!=st.end()){
		printf("%d ",s);
		s++;
	}
	cout<<endl;
	printf("%d %d \n",st.find(2),st.find(3));
	return 0;
}
