#include<cstdio>
#include<cstring>
int ans[1008]={0},n,m;
int lena;
void BIGNUM_POW(int a,int b){
    ans[1]=a;
    lena=1; 
    while(lena<4){
        ans[lena+1]+=ans[lena]/10;
        ans[lena]%=10;
        lena++;
    }
    for(int i=lena;i>=0;i--){
    	if(ans[i]==0)lena--;
    	else break;
	}
    for(int i=1;i<=b-1;i++){
        for(int j=1;j<=lena;j++){
            ans[j]*=a;
        }
        lena=1;
        while(lena<400){
        ans[lena+1]+=ans[lena]/10;
        ans[lena]%=10;
        lena++;
        }
        for(int k=lena;k>=0;k--){
    	if(ans[k]==0)lena--;
    	else break;
		}
    }
    for (int i =lena; i >=1; i--)
    {
        printf("%d",ans[i]);
    }
    
}
int main(){
    scanf("%d%d",&n,&m);
    BIGNUM_POW(n,m);
    return 0;
}
