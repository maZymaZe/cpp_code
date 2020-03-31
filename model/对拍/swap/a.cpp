#include<cstdio>
int main(){
	freopen("t.in","r",stdin);
	freopen("a.out","w",stdout);
	int a,b;
	scanf("%d%d",&a,&b);
	a^=b^=a^=b;
	printf("%d %d",a,b);
	return 0;
} 
