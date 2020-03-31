#include <cstdio>
#include<algorithm>
using namespace std; 
int main()
{
	freopen("gcd_a.in","r",stdin);
	freopen("gcd_a.out","w",stdout); 
	int a, d;
	scanf("%d%d", &a, &d);
	printf("%d",__gcd(a, d));
	return 0;
}
