#include<cstdio>
int main(){
	int a[2][4]={{1,2,3,4},{2,3,4,5}};
	int (*p)[4];
	p=a;
/*	
	for(int i=0;i<=2;i++){
		for(int j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}*/
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++)
		printf("%d ",*(p[i])+j);
		printf("\n"); 
	}
	return 0;
} 
