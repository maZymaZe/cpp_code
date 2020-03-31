#include <cstdio>
#include<cstring>
struct line
{
    int x, y;
    int step;
} l[100008];   
int min(int p,int q){
	if(p<q)return p;
	return q;
}
int a,b,c,n, t, mp[408][408] = {0}, f = 0;
int main()
{

    scanf("%d", &t);
    for(;t>=1;t--){
    	f=0;
		scanf("%d",&n);
		for(int i=1;i<=100003;i++)l[i].x=l[i].y=l[i].step=0;
		for(int i=0;i<=305;i++){
			for(int j=0;j<=305;j++)
			mp[i][j]=99999;
		}
		for (; n>=1; n--)
	    {
	       scanf("%d%d%d", &a,&b,&c);
	       mp[a][b]=min(c,mp[a][b]);
	       if(a>0)mp[a-1][b]=min(c,mp[a-1][b]);
	       if(b>0)mp[a][b-1]=min(c,mp[a][b-1]);
	       mp[a][b+1]=min(c,mp[a][b+1]);
	       mp[a+1][b]=min(c,mp[a+1][b]);
		}
	    int head = 1, tail = 1;
	    l[1].x = 0;
	    l[1].y = 0;
	    l[1].step=0;
	    while (head <= tail)
	    {
	        if (l[head].x + 1 <=304&&mp[l[head].x + 1][l[head].y] >l[head].step+1)
	        {
	            tail++;
	            l[tail].x = l[head].x + 1;
	            l[tail].y = l[head].y;
	            l[tail].step = l[head].step+1;
	            if (mp[l[tail].x ][l[tail].y]==99999&&(l[tail].x!=0||l[tail].y!=0))
	            {
	                f = 1;
	                break;
	            }
	        }
	        if (l[head].x - 1 >= 0 &&mp[l[head].x - 1][l[head].y] >l[head].step+1)
	        {
	            tail++;
	            l[tail].x = l[head].x - 1;
	            l[tail].y = l[head].y;
	            l[tail].step = l[head].step+1;
	            if (mp[l[tail].x ][l[tail].y]==99999&&(l[tail].x!=0||l[tail].y!=0))
	            {
	                f = 1;
	                break;
	            }
	        }
	        if (l[head].y + 1 <=304&& mp[l[head].x][l[head].y + 1] >l[head].step+1)
	        {
	            tail++;
	            l[tail].x = l[head].x;
	            l[tail].y = l[head].y + 1;
	            l[tail].step = l[head].step+1;
	            if (mp[l[tail].x ][l[tail].y]==99999&&(l[tail].x!=0||l[tail].y!=0))
	            {
	                f = 1;
	                break;
	            }
	        }
	        if (l[head].y - 1 >= 0 &&mp[l[head].x][l[head].y - 1] >l[head].step+1)
	        {
	            tail++;
	            l[tail].x = l[head].x;
	            l[tail].y = l[head].y - 1;
	            l[tail].step = l[head].step+1;
	            if ((mp[l[tail].x ][l[tail].y]==99999)&&(l[tail].x!=0||l[tail].y!=0))
	            {
	                f = 1;
	                break;
	            }
	        }
	        mp[l[head].x][l[head].y] = -1;
	        head++;
	        if(head>=100000)break;
	    }
	    if (f == 0)
	        printf("-1\n");
	    else
	    {
	        printf("%d\n",l[tail].step);
	    }
	}
    return 0;
}
