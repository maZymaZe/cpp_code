#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int gcd(int p,int q){
	if(p==0)return q;
	if(q==0)return p;
	if(p>=q)return gcd(p%q,q);
	if(q>p)return gcd(q%p,p);
}
int main(){
	int a,d;
	string s=string(80,'*');
	cout<<s;
	scanf("%d%d",&a,&d);
	printf("%d",gcd(a,d));
	return 0;
}
