#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	freopen("data.in","r",stdin);
	freopen("s.out","w",stdout);
	int n,a[1008];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
