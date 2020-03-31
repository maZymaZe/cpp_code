#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
int main(){
	char t[100006],s[100006];
	int f[100006]={0};
	scanf("%s",t);
	scanf("%s",s);
	int maxl=0,ans,lt,ls,j,k,now,w,i=0;
	lt=strlen(t);
	ls=strlen(s);
	w=0;
	if(ls<lt)do{
		s[ls]=s[w];
		w++;ls++;
		if(w==ls)w=0;
	}while(ls<lt);
	f[0]=0;
	for(i=1;i<ls;i++){
		j=f[i-1];
		while(s[i]!=s[j]&&j>0)
		j=f[j-1];
		if(s[i]==s[j])f[i]=j+1;
		else  f[i]=0; 	
	}
	//for(i=0;i<ls;i++)printf("%d ",f[i]);
	i=0;j=0;ans=0;maxl=0;now=0;
	while(i<lt){
		if(t[i]==s[j])now++,i++,j++;
		else{
			if(now>maxl){
			maxl=now;
			ans=i-now;
			}
			if(j==0)i++;
			else{
				j=f[j-1];
				now=j;
			}	
		}
		if(maxl>=lt-i+now)break;
	}
	if(now>maxl){
		maxl=now;
		ans=i-now;
		}
	printf("%d",ans+1);
	return 0;
} 
