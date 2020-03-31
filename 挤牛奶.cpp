#include<cstdio>
int n,a,b,t[1000002],mb,my,mm,f,y,m;
long long s;
int main (){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		if(b>mb)mb=b;
		t[a]++;
		t[b]--;
	}
	for(int i=0;i<=mb;i++){
		if(s==0&&t[i]>0){
			if(y>my)my=y;
			y=0;
		}
		if(s>0&&s+t[i]==0){
			if(m>mm)mm=m;
			m=0;
		}
		s+=t[i];
		if(s>0)y++,f=1;
		if(s==0&&f==1)m++;
		
	}
	if(b>mb)mb=b;
	if(y>my)my=y;
	printf("%d %d",my,mm);
	return 0;
} 
