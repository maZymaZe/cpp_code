#include<cstdio>
int a,b;
double w[1003][1003];
bool v[1003][1003];
double dfs(int a,int b){
    if(a==0)return 0;
    if(b==0)return a;
    if(v[a][b])return w[a][b];
    v[a][b]=true;
    double ret=1.0*a/(a+b)*(1+dfs(a-1,b))+1.0*b/(a+b)*(dfs(a,b-1)-1);
    if(ret<0)ret=0;
    return w[a][b]=ret;
}
int main(){
    scanf("%d%d",&a,&b);
    dfs(a,b);
    printf("%lf",w[a][b]);
}
//when you get an A,you get 1$,while you lose 1$,when you get a B