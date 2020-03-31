#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char a[100]="hello";
	int n;
	ofstream op;
	op.open("hellp.txt");
	cout<<"write hello"<<endl;
	cout<<"enter a num";
	cin>>n;
	op<<a<<endl<<n<<endl;
	ifstream ip;
	ip.open("hello.txt");
	ip>>a;
	cout<<a<<endl;
	ip>>n;
	cout<<n<<endl;
	ip.close();
	return 0;
} 
