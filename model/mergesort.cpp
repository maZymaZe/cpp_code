#include <cstdio>
int g1[500005], g2[500005], n;
void mgs(int l, int r)
{
    if (r - l >= 1)
    {
        int mid = (l + r) / 2;
        mgs(l, mid);
        mgs(mid + 1, r);
        int l1 = mid - l + 1, l2 = r - mid;
        int p1 = l, p2 = mid + 1, p3 = l;
        while (p1 <= mid && p2 <= r)
        {
            if (g1[p1] <= g1[p2])
            {
                g2[p3] = g1[p1];
                p1++;
                p3++;
            }
            else
            {
                g2[p3] = g1[p2];
                p2++;
                p3++;
            }
        }
        while (p1 <= mid)
        {
            g2[p3] = g1[p1];
            p1++;
            p3++;
        }
        while (p2 <= r)
        {
            g2[p3] = g1[p2];
            p2++;
            p3++;
        }
        for (int i = l; i <= r; i++)
        {
            g1[i] = g2[i];
        }
    }
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &g1[i]);
    }
    mgs(1, n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", g1[i]);
    }
    return 0;
}