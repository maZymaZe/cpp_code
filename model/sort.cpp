#include<cstdio>
#include<algorithm>
using namespace std;
int a[10000];
int cmp(const int&p,const int&q){
	return p>q;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
} 
