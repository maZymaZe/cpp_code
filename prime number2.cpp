#include<cstdio>
#include<cmath>
int num[2000000],f;
int main(){
	for(int i=2;i<=1000000;i++){
		f=0;
		for(int j=2;j<=sqrt(i);j++)
		if(i%j==0)f=1;
		if(f==0)printf("%d ",i);
	}
	return 0;
}
