#include<cstdio>
int n,m,f[10004]={0},a,b,c;
int fd(int x){
    if(f[x]==x)return x;
    else return f[x]=fd(f[x]);
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)f[i]=i;
    for(int i=1;i<=m;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a==1){
            f[fd(b)]=fd(c);
        }
        else{
            if(fd(b)==fd(c))printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}
/*
struct disjoint_set 
{
private:
	int f[N + 10];
	inline int father(int x)
	{
		int fa = x;
		while(fa ^ f[fa])
			fa = f[fa];
		while(x ^ f[x])
			f[x] = fa,x = f[x];
		return fa;
	}
public:
	disjoint_set()
	{
		for(register int i = 1;i <= N;++i)
			f[i] = i;
	}
	inline void merge(int x,int y)
	{
		f[father(x)] = father(y);
	}
	inline bool sameset(int x,int y)
	{
		return father(x) == father(y);
	}
	inline bool isroot(int x)
	{
		return f[x] == x;
	}
} dsu;