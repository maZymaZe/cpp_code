#include<cstdio>
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
int main(){
    int n,a[13][13]={0},ans[13][13]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            ans[i][j]=a[i][j]+max(ans[i+1][j],ans[i+1][j+1]);
        }
    }
    printf("max=%d",ans[1][1]);
    return 0;
}