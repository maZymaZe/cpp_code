#include<cstdio>
#include<ctime>
int main(){
	time_t now=time(0);
	tm *ltm=localtime(&now);
	printf("year=%d\n",ltm->tm_year+1900);
	printf("mon=%d\n",1+ltm->tm_mon);
	printf("day=%d\n",ltm->tm_mday);
	printf("hour=%d\n",ltm->tm_hour);
	printf("min=%d\n",ltm->tm_min);
	printf("sec=%d\n",ltm->tm_sec);
	return 0;
} 
