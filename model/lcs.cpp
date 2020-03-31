#include <cstdio>
#include<cstring>
int max(int p, int q)
{
    if (p > q)
        return p;
    return q;
}
int ans[1004][1004]={0};
int main()
{
    char a[1004] = {0}, b[1004] = {0}, c[1004] = {0};
    int t, i, j;
    int la, lb;
    scanf("%s", a);
    scanf("%s", b);
    la = strlen(a);
    lb = strlen(b);
    for (i = 1; i <= la; i++)
    {
        for (j = 1; j <= lb; j++)
        {
            if (a[i - 1] == b[j - 1])
                ans[i][j] = ans[i - 1][j - 1] + 1;
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
            }
        }
    }
    // printf("%d\n",ans[la][lb]);
    t = ans[la][lb];
    i = la, j = lb;
    while (t > 0 && i && j)
    {
        if (a[i - 1] == b[j - 1])
            c[t--] = b[j - 1], i--, j--;
        else if (ans[i - 1][j] > ans[i][j - 1])
            i--;
        else
            j--;
    }
    for (i = 1; i <= ans[la][lb]; i++)
    {
        printf("%c", c[i]);
    }
    return 0;
}
