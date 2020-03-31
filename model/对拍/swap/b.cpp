#include<cstdio>
int main(){
	freopen("t.in","r",stdin);
	freopen("b.out","w",stdout);
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d %d",a,b);
	return 0;
} 
