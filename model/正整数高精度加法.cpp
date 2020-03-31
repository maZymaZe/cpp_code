#include<cstdio>
#include<cstring>
char num1[10003],num2[10003];
int sum[10002]={0},len_s;
void BIGNUM_PLUS(char p[],char q[]){
	int len_a,len_b,m;
	int a[10001]={0},b[10001]={0};
	len_a=strlen(p);
	len_b=strlen(q);
	for(int i=1;i<=len_a;i++)a[i]=(int)num1[len_a-i]-48;
	for(int i=1;i<=len_b;i++)b[i]=(int)num2[len_b-i]-48;
	if(len_a>len_b)m=len_a;
	else m=len_b;
	len_s=m;
	for(int i=1;i<=m;i++){
		sum[i]=a[i]+b[i]+sum[i];
		if(sum[i]>=10){
			sum[i+1]++;
			sum[i]-=10;
			if(i==m)len_s=m+1;
		}
	}
}
void printf_sum(){
	for(int i=len_s;i>=1;i--){
		printf("%d",sum[i]);
	}
	printf("\n");
}
int main(){
	scanf("%s",num1);
	scanf("%s",num2);
	BIGNUM_PLUS(num1,num2);
	printf_sum();
	return 0;
}
