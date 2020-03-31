#include<cstdio>
struct data{
	int a:3;
	int b:2;
	int c:3;
	int :6;
	int d:2;
}dt;
int main(){
	dt.a=6;
	dt.b=3;
	dt.c=7;
	dt.d=1;
	printf("%d ",dt.d);
	dt.d=0;
	printf("%d ",dt.d);
	
	return 0;
}
