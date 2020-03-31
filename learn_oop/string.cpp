#include<cstring>
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
//	string s1();
	string s1("world");
	string s2("hello");
	string s3(3,'*');
	string s4(s2,1,3);//起始+长度 
	s2=s2.assign("world",0,5);//起始+长度 
	cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl;
	cout<<s1.length()<<' '<<s1.size()<<endl;
	s2=s2+" "+s1;
	cout<<s2<<endl;
	if(s1==s2)cout<<"s1=s2"<<endl;
	if(s1<s2)cout<<"s1<s2"<<endl;
	cout<<s1.compare(0,5,s2,0,5)<<endl;
	s1.swap(s3);
	cout<<s3<<endl;
	cout<<s3.substr(2,2)<<endl;
	cout<<s3.find("r")<<' '<<s3.find('l')<<' '<<s3.find("or")<<endl;
	s3.replace(2,2,s1,0,2);//1、迭代器则是区间 2、数字是起始+长度 （起始如果没有默认为0）,
						   //2个参数都没有就默认整个字符串 
	cout<<s3<<endl;
	s3.erase(2,2);
	cout<<s3<<endl;
	s3.insert(2,"rl");
	cout<<s3<<endl;
	string::iterator s=s2.begin();
	while(s!=s2.end()){
		cout<<*s;
		s++;
	}
	cout<<endl;
	
	return 0;
} 
