#include<cstdio>
int main(){
	int n,a[10008]={0},ans[10008]={0},f,m=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		f=0;
		for(int j=i-1;j>=1;j--){
			if(a[i]>=a[j]){
				if(ans[i]<ans[j]+1)ans[i]=ans[j]+1,f=1;
			}
		}
		if(f==0)ans[i]=1;
	}
	for(int i=1;i<=n;i++){
		if(ans[i]>m)m=ans[i];
	}
	printf("%d",m);
	return 0;
} 
