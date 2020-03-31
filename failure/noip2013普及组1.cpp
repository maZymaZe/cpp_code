#include<cstdio>
int main(){
	int a,b,c=0,d=1,e,h[20],f=0;
	scanf("%d%d",&a,&b);
	e=a;
	for(f=1;f<=20;f++){
		h[f]=e%10;
		e/=10;
		if(e==0)break;
	}
	for(int i=1;i<=f;i++)printf("%d  ",h[i]);
	while(d<=a)d*=10;
	d/=10;
	while(a!=0){	
	if(h[f]>b)c=c+d;
	if(h[f]==b)c+=a-d+1;
	
	a/=10;
	d/=10;
	f--;
	printf("%d\n",c);	
	}
	printf("%d",c+1);
	return 0;
} 
