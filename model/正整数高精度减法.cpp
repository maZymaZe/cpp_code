#include<cstdio>
#include<cstring>
char num1[10003],num2[10003];
int difference[10002]={0},len_d,m;
void BIGNUM_SUBTRACT(char p[],char q[]){
	int len_a,len_b,w;
	int a[10001]={0},b[10001]={0};
	char t[10001]={0};
	len_a=strlen(p);
	len_b=strlen(q);
	if(len_a<len_b||((len_a==len_b)&&(strcmp(num1,num2)<0))){
		strcpy(t,num1);
		strcpy(num1,num2);
		strcpy(num2,t);
		printf("-");
		w=len_a;
		len_a=len_b;
		len_b=w;
	}
	
		m=len_a;
		for(int i=1;i<=len_a;i++)a[i]=(int)num1[len_a-i]-48;
		for(int i=1;i<=len_b;i++)b[i]=(int)num2[len_b-i]-48;
		for(int i=1;i<=m;i++){
			difference[i]=a[i]-b[i]+difference[i];
			if(difference[i]<0){
				difference[i+1]--;
				difference[i]+=10;
			}
		}
	
}
void printf_difference(){
	for(int i=m;i>=1;i--){
		if(difference[i]!=0){
		len_d=i;
		break;
		}
	}
	for(int i=len_d;i>=1;i--){
		printf("%d",difference[i]);
	}
	printf("\n");
}
int main(){
	scanf("%s",num1);
	scanf("%s",num2);
	BIGNUM_SUBTRACT(num1,num2);
	printf_difference();
	return 0;
} 
