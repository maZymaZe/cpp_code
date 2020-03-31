#include <cstdio>
int n, a[110005], c[110005];
void j(int i, int x)
{
    for (int z = i; z <= 100005; z += -z & z)
        c[z] += x;
}
int he(int x)
{
    int s = 0;
    for (int k = x; k > 0; k -= -k & k)
        s += c[k];
    return s;
}
int main()
{
    long long ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n; i >= 1; i--)
    {
        j(a[i], 1);
        ans += he(a[i] - 1);
    }
    printf("%lld", ans);
}
