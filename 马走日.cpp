#include<cstdio>
#include<cstring>
int mp[12][12]={0},t,n,m,sx,sy,ans;
int dx[8]={1,2,2,1,-1,-2,-2,-1},dy[8]={-2,-1,1,2,2,1,-1,-2};
void dfs(int d,int x,int y){
    if(d==n*m){
        ans++;
    }
    else{
        for(int i=0;i<8;i++){
            if(x+dx[i]>=0&&x+dx[i]<n&&y+dy[i]>=0&&dy[i]+y<m)
            if(mp[dx[i]+x][dy[i]+y]==0){
                mp[dx[i]+x][dy[i]+y]=1;
                dfs(d+1,dx[i]+x,dy[i]+y);
                mp[dx[i]+x][dy[i]+y]=0;
            }
        }
    }
}
int main(){
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d%d%d%d",&n,&m,&sx,&sy);
        memset(mp,0,sizeof(mp));
        ans=0;
        mp[sx][sy]=1;
        dfs(1,sx,sy);
        printf("%d\n",ans);
    }
    return 0;
}