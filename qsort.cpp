#include<cstdio>
int a[1000],n;
void qsort(int l,int r){
	int k=l,j=r,p,mid=(l+r)/2,t=a[mid];
	while(k<=j){
		while(a[k]<t&&k<r)k++;
		while(a[j]>t&&j>l)j--;
		if(k<=j){
			p=a[k];a[k]=a[j];a[j]=p;
			k++;j--;
		}
	}
	if(l<j)qsort(l,j);
	if(r>k)qsort(k,r);
	
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	qsort(1,n);
	for(int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
