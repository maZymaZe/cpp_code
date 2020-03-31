#include<cstdio>
int gcd(int a,int b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
int main(){
	int (*p)(int,int)=&gcd;
	printf("%d %d",gcd(84,gcd(24,36)),p(84,p(24,36)));
	return 0;
}
