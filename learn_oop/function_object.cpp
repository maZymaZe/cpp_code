#include<iostream>
#include<cstdio>
using namespace std;
class cav{
	public:
		double operator()(int a,int b,int c){
			return 1.0*(a+b+c)/3;
		}
};
int main(){
	cav av;
	cout<<(av(1,2,3))<<endl;
	return 0;
}
