#include<cstdio>
#include<cstring>
char num1[10003],num2[10003];
int product[20012]={0},len_p;
void BIGNUM_MULTIPLY(char p[],char q[]){
	int len_a,len_b;
	int a[10001]={0},b[10001]={0};
	len_a=strlen(p);
	len_b=strlen(q);
	for(int i=1;i<=len_a;i++)a[i]=(int)num1[len_a-i]-48;
	for(int i=1;i<=len_b;i++)b[i]=(int)num2[len_b-i]-48;
	
	for(int i=1;i<=len_a;i++){
		for(int j=1;j<=len_b;j++){
			product[i+j-1]+=a[i]*b[j];
		}
	}
	for(int i=1;i<=20010;i++){
		product[i+1]+=product[i]/10;
		product[i]%=10;
	}
	for(int i=20010;i>=0;i--)
	{
		if(product[i]){
		len_p=i;
		break;
		}
	}
}
void printf_product(){
	for(int i=len_p;i>=1;i--){
		printf("%d",product[i]);
	}
	printf("\n");
}
int main(){
	scanf("%s",num1);
	scanf("%s",num2);
	BIGNUM_MULTIPLY(num1,num2);
	printf_product();
	return 0;
}
