#include <cstdio>
int gcd(int p, int q)
{
	if (q == 0)
		return p;
	else
		return gcd(q, p % q);
}
int main()
{
	int a, d;
	scanf("%d%d", &a, &d);
	printf("%d", gcd(a, d));
	return 0;
}
