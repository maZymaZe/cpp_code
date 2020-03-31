#include<bitset>
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
	bitset<8> b(12);
	string s("1010010");
	bitset<12> b1(s);
	cout<<b<<endl<<b1<<endl; 
	return 0;
}
