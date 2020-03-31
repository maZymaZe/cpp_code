#include<cstdio>
int dis[1002],w[1002][1002],pre[1002],n,m,u[1002];
int main(){
    int a,b,c;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            w[i][j]=w[j][i]=999999;
        }
    }
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&a,&b,&c);
        w[a][b]=w[b][a]=c;
    }
    return 0;
}