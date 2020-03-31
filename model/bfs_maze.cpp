#include <cstdio>
struct line
{
    int x, y;
    int front;
} l[100008];
int main()
{
    int n, m, x1, x2, y1, y2, mp[108][108] = {0}, f = 0, ansx[100008] = {0}, ansy[100008] = {0}, step = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            scanf("%1d", &mp[i][j]);
    }
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    int head = 1, tail = 1;
    l[1].x = x1;
    l[1].y = y1;
    l[1].front = 0;
    while (head <= tail)
    {
        if (l[head].x + 1 <= n && mp[l[head].x + 1][l[head].y] != 1)
        {
            tail++;
            l[tail].x = l[head].x + 1;
            l[tail].y = l[head].y;
            l[tail].front = head;
            if (l[tail].x == x2 && l[tail].y == y2)
            {
                f = 1;
                break;
            }
        }
        if (l[head].x - 1 > 0 && mp[l[head].x - 1][l[head].y] != 1)
        {
            tail++;
            l[tail].x = l[head].x - 1;
            l[tail].y = l[head].y;
            l[tail].front = head;
            if (l[tail].x == x2 && l[tail].y == y2)
            {
                f = 1;
                break;
            }
        }
        if (l[head].y + 1 <= n && mp[l[head].x][l[head].y + 1] != 1)
        {
            tail++;
            l[tail].x = l[head].x;
            l[tail].y = l[head].y + 1;
            l[tail].front = head;
            if (l[tail].x == x2 && l[tail].y == y2)
            {
                f = 1;
                break;
            }
        }
        if (l[head].y - 1 > 0 && mp[l[head].x][l[head].y - 1] != 1)
        {
            tail++;
            l[tail].x = l[head].x;
            l[tail].y = l[head].y - 1;
            l[tail].front = head;
            if (l[tail].x == x2 && l[tail].y == y2)
            {
                f = 1;
                break;
            }
        }
        mp[l[head].x][l[head].y] = 1;
        head++;
    }
    if (f == 0)
        printf("fail\n");
    else
    {
        for (int i = l[tail].front; i != 0; i = l[i].front)
        {
            step++;
            ansx[step] = l[i].x;
            ansy[step] = l[i].y;
        }
        ansx[0] = x2, ansy[0] = y2;
        printf("a possible way:  step:%d\n", step);
        for (int k = 1; k <= step; k++)
        {
            printf("step %d : (%d,%d)->(%d,%d)\n", k,ansx[step - k +1], ansy[step - k+1 ], ansx[step - k], ansy[step - k]);
        }
    }
    return 0;
}