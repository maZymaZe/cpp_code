#include<cstdio>
#include<cstdlib>
int n,a[100003];
void qs(int l,int r){
	int mid=a[(l+r)/2];
	int i=l,j=r,t;
	while(i<=j){
		while(a[i]<mid)i++;
		while(a[j]>mid)j--;
		if(i<=j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			i++;
			j--;	
		}
	}
	if(l<j)qs(l,j);
	if(i<r)qs(i,r);
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	qs(1,n);
	for(int i=1;i<=n;i++)printf("%d ",a[i]);
	return 0;
} 
