#include<cstdio>
#include<cstdarg>
double average(int n,...){
	va_list l;
	double s=0.0;
	int i;
	va_start(l,n);
	for(i=1;i<=n;i++)
		s+=va_arg(l,int);
	va_end(l);
	return s/n;
}
int main(){
	printf("%lf",average(3,4,5,6));
	return 0;
}
