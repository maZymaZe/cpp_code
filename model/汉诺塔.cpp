#include<cstdio>
long long ans=0;
void h(int a,int b,int c,int n)
{
	if(n>1){
	h(a,c,b,n-1);
	printf("%d  %d -> %d\n",n,a,c),ans++;
	h(b,a,c,n-1);
	}
	else printf("1  %d -> %d\n",a,c),ans++;
}
int main(){
	int n;
	scanf("%d",&n);
	h(1,2,3,n);
	printf("%lld",ans);
	return 0;
}
