#include<cstdio>
double division(int a, int b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}
int main(){
	printf("%lf",division(3,0));
	return 0;
}
