#include<cstdio>
int num[65],n,w=1,g=2;
int main(){
	scanf("%d",&n);
	while(1){
		num[w]=n%2;
		if(n==1)break;
		n/=2;
		w++;
	}
	for(int i=w;i>=1;i--){
		printf("%d",num[i]);
	}
	return 0;
}
