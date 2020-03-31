#include<cstdio>
int main(){
	int n,a[100009];
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=2*i;j<=n;j+=i)
			a[j]=1;
		}
	}
	for(int i=2;i<=n;i++){
		if(a[i]==0)printf("%d ",i);
	}
	return 0;
}
