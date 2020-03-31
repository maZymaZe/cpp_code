#include<ctime>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
int main(){
	freopen("t.in","w",stdout);
	srand(time(NULL));
	int a,b;
	a=pow(-1,rand())*(rand()%1000000);
	b=pow(-1,rand())*(rand()%1000000);
	printf("%d %d",a,b);
	return 0;
}
