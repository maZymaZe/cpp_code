/*
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
*/
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdlib>
using namespace std;
int ans=0,mp[9][9],it,hh[9][10],ss[9][10],bb[3][3][10],err=0,v[9][9],cc=0,a[9],b[9],c[4][4],vv[9][9];
struct qs{
	int x,y;
}ls[81];
int cmp(const qs&aa,const qs&bc){
	return vv[aa.x][aa.y]>vv[bc.x][bc.y];
}
void op(){
	int s=0;
	for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			s+=v[i][j]*mp[i][j];
		}
	}
	if(s>ans)ans=s;
}
void dfs(int w){
	
	if(w==cc+1){
		err=0;
		printf("\n");
		for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			printf("%d ",mp[i][j]);
		}
		printf("\n");
	}
		op();
	}
	else{
		for(int k=9;k>=1;k--){
			if(hh[ls[w].x][k]==0)
			if(ss[ls[w].y][k]==0)
			if (bb[ls[w].x/3][ls[w].y/3][k]==0){
				mp[ls[w].x][ls[w].y]=k;
				hh[ls[w].x][k]++;
				ss[ls[w].y][k]++;
				bb[ls[w].x/3][ls[w].y/3][k]++;
				dfs(w+1);
				mp[ls[w].x][ls[w].y]=0;
				hh[ls[w].x][k]--;
				ss[ls[w].y][k]--;
				bb[ls[w].x/3][ls[w].y/3][k]--;
			}
		}
	
	}
}
int main(){
	for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			v[i][j]=10-max(abs(i-4),abs(j-4));
			scanf("%d",&it);
				if(it!=0){
					mp[i][j]=it;
					if(hh[i][it]==0)hh[i][it]=1,a[i]++;
					else err=1;
					if(ss[j][it]==0)ss[j][it]=1,b[j]++; 
					else err=1;
					if(bb[i/3][j/3][it]==0)bb[i/3][j/3][it]=1,c[i/3][j/3]++;
					else err=1;
				}
				else{
					cc++;
					ls[cc].x=i;
					ls[cc].y=j;
				}
		}
	}
	if(err==1){
		printf("-1");
	}
	else{
		err=1;
		for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			vv[i][j]=max(c[i/3][j/3],max(a[i],b[j]));
		}}
		sort(ls+1,ls+cc+1,cmp);
		dfs(1);
		if(err==1)printf("-1");
	//	else printf("%d",ans);
	}	
	return 0;
} 
