#include<cstdio>
#include<ctime>
#include<cstdlib>
int main(){
	freopen("data.in","w",stdout);
	int n;
	srand(time(NULL));
	n=rand()%500+500;
	printf("%d\n",n);
	for(int i=1;i<=n;i++){
		printf("%d ",rand()%1000007+568889);
	} 
	return 0;
}
