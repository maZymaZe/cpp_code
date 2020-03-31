#include<cstdio>
int num[20000];
int main(){
	for(int i=2;i<=10000;i++){
		if(num[i]==0){
			printf("%d ",i);
			for(int j=i;j<=10000;j+=i)
			num[j]++;
		} 
	}
	return 0;
} 
