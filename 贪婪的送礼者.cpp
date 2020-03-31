#include<cstdio>
#include<cstring>
int n,m[20],o,a,b;
char name[20][20],giver[20],receiver[20];
int checkg(){
	int k;
	for(k=1;k<=n;k++){
		if(strcmp(name[k],giver)==0)break;
	}
	return k;
}
int checkr(){
	int g;
	for(g=1;g<=n;g++){
		if(strcmp(name[g],receiver)==0)break;
	}
	return g;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",name[i]);
	}
	for(int i=1;i<=n;i++){
		scanf("%s",giver);
		scanf("%d%d",&a,&b);
		if(b==0)continue;
		else{
			m[checkg()]-=a;
			for(int j=1;j<=b;j++){
				scanf("%s",receiver);
				m[checkr()]+=(a/b);
			}
			m[checkg()]+=(a-a/b*b);	
		}
	}
	for(int h=1;h<=n;h++)
	{
		printf("%s %d\n",name[h],m[h]);
	}
	return 0;
} 
