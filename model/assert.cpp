#include<cassert>
#include<cstdio>
int main(){
	int a=1;
	printf("%d",a);
	assert(a==1);
	printf("%d",a);
	a=2;
	assert(a==1);
	printf("%d",a);
	return 0;
}
