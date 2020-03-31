#include <cstdio>
#include<algorithm>
using namespace std; 
int main()
{
	FILE *fp,*fq;
	char fi[99],fo[99];
	scanf("%s%*c",fi);
	scanf("%s%*c",fo);
	fp=fopen(fi,"r");
	fq=fopen(fo,"w");
	if(!fp)fprintf(fq,"err");
	int b,e;
	fscanf(fp,"%d %d",&b,&e);
	//scanf("%d%d",&b,&e);
	fprintf(fq,"%d",__gcd(b,e));
	//printf("%d %d %d",b,e,__gcd(b,e));
	fclose(fp);
	fclose(fq);
	return 0;
}
