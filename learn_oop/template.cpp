#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
template <class T>
T add(T a,T b){
	return a+b;
}
template <class T,class T2>
T add(T a,T2 b){
	return a+b;
}
/*template<class I,class O>
O m(I a,I b,O){
	return (O)(a-b);
}*/
int main(){
	int a1=1,b1=2;
	double a2=1.1,b2=2.2;
	char  a3=(char)45,b3=(char)52;
	string a4("hello "),b4("world");
	cout<<add(a1,b1)<<' '<<add(a2,b2)<<' '<<add(a3,b3)<<endl<<add(a4,b4)<<endl;
	int (*p)(int,int);
	p=add;
	cout<<p(1,2)<<endl;
	cout<<add(a1,a2)<<"  "<<add(b2,b1)<<endl;
//	cout<<m(2,1,double);
	return 0;
}
