#include<cstdio>
int a[11][11],b[11][11],d[11][11],q[11][11],n,w=0;
char c;
int ma(){
	int f=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		if(b[i][j]!=d[i][j])f=1;
	}
	if(f)return 0;
	else return 1;
} 
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
		{
		scanf("%c",&c);
		if(c=='@')a[i][j]=1;
		}
	}
	for(int i=1;i<=n;i++){ 
		for(int j=1;j<=n;j++)
		{
		scanf("%c",&c);
		if(c=='@')d[i][j]=1;
		}
	}	
	for(int i=1;i<=n;i++){//1 
		for(int j=1;j<=n;j++){
		b[j][n+1-i]=a[i][j];
		}	
	}	
	if(ma()){
	printf("1");
	}
	else{//2		
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				b[n+1-i][n+1-j]=a[i][j];
			}
		}
		if(ma()){
		printf("2");		
		}	
		else{//3
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					b[n+1-j][i]=a[i][j];
				}
			}
			if(ma()){
				printf("3");		
			}
			else{//4
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						b[i][n+1-j]=a[i][j];
						q[i][n+1-j]=a[i][j];
					}
				}
				if(ma()){
				printf("4");		
				}
				else{//5
						for(int i=1;i<=n;i++){
							for(int j=1;j<=n;j++){
								b[j][n+1-i]=q[i][j];
							}	
						}	
						if(ma()){
						w=1;
						}
						else{
							for(int i=1;i<=n;i++){
								for(int j=1;j<=n;j++){
									b[n+1-i][n+1-j]=q[i][j];
								}
							}
							if(ma()){
							w=1;		
							}							
							else{
								for(int i=1;i<=n;i++){
									for(int j=1;j<=n;j++){
										b[n+1-j][i]=q[i][j];
									}
								}
								if(ma()){
									w=1;		
								}
								if(w==1)printf("5");
								else{//6
								for(int i=1;i<=n;i++){
								for(int j=1;j<=n;j++){
									b[i][j]=a[i][j];
									}
								}
									if(ma()){
										printf("6");		
									}	
								else printf("7");	
								}
							}	
						}
					}
				}
			}
		}
	return 0;
}
