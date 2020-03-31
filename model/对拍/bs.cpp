#include<cstdio>
int main(){
	freopen("data.in","r",stdin);
	freopen("bs.out","w",stdout);
	int n,t;
	scanf("%d",&n);
	int a[1009];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
