#define MAX 10005

#define INF 2000000000
#include<queue>
#include<cstdio>
#include<vector>
using namespace std;
struct pr{
    int d,p;
};
int e[MAX][MAX];
struct cmp{
    bool operator()(pr a,pr b){
        return a.d>b.d||(a.d==b.d&&a.p<b.p);
    }
};
priority_queue<pr,vector<pr>,cmp>  q;
int vis[MAX],dis[MAX],cnt,n,m,s,t1,t2,t3;
int main(){
    scanf("%d%d%d",&n,&m,&s);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i!=j)e[i][j]=INF;
        }
    }
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&t1,&t2,&t3);
        e[t1][t2]=t3;
    }
    for(int i=1;i<=n;i++)dis[i]=INF;
    dis[s]=0;
    q.push({0,s});
    while(!q.empty()){
        pr now=q.top();
        q.pop();
        if(vis[now.p])continue;
        vis[now.p]=1;
        for(int i=1;i<=n;i++){
            if(e[now.p][i]==INF)continue;
            int vv=i;
            if(dis[vv]>dis[now.p]+e[now.p][i]){
                dis[vv]=dis[now.p]+e[now.p][i];
                q.push({dis[vv],vv});
            }
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",dis[i]);
    }
    return 0;
}

