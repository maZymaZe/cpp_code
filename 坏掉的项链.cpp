#include<cstdio>
int c[400],n,m,maxm,l,r,k,t;
char a;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%c",&a);
		if(a=='r')c[i]=1;
		if(a=='b')c[i]=-1;
	}
	for(int i=1;i<=n;i++){
		if(c[i]==c[i+1])continue;
		m=0;
		k=i;
		t=0;
		while(c[k]==0){
			k++;
			t++;
			if(k==n+1)k=1;
			if(t>n)break;
		}
		r=c[k];
		k=i;
		if(k==1)k=n;
		else k--;
		t=0;
		while(c[k]==0){
			k--;
			if(k==0)k=n;
			if(t>n)break;
		}
		l=c[k];
		k=i;
		while(c[k]==0||c[k]==r){
			m++;
			k++;
			if(k==n+1)k=1;
			if(m>n)break;
		}
		k=i-1;
		if(k==0)k=n;
		while(c[k]==0||c[k]==l){
			m++;
			k--;
			if(k==0)k=n;
			if(m>n)break;
		}
		if(m>maxm)maxm=m;
		if(m>n)break;	
		
	}
	if(maxm>n||maxm==0)maxm=n;
	printf("%d",maxm);/*
	不知道为什么，有一个数据本地正确，网上错*/ 
	return 0;
} 
