#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
template<typename T>
class pq{
	public:
		pq();
		T a[10005];
		int len;
		T top();
		void push(T nw);
		void pop();
		bool empty();
};
template<typename T>
pq<T>::pq(){
	len=0;
}
template<typename T>
bool pq<T>::empty(){
	return pq::len;
}
template<typename T>
void pq<T>::pop(){
	swap(a[1],a[len]);
	len--;
	int now=1,x;
	while(now*2<=pq::len){
		x=2*now;
		if(x+1<=len&&a[x+1]<a[x])x++;
		if(pq::a[now]>pq::a[x]){
			swap(pq::a[now],pq::a[x]);
			now=x;
		}
		else break;
	}
}
template<typename T>
T pq<T>::top(){
	return pq::a[1];
}
template<typename T>
void pq<T>::push(T nw){
	len++;
	pq::a[pq::len]=nw;
	int now=len;
	while(now>1){
		if(pq::a[now]<pq::a[now/2]){
			swap(pq::a[now],pq::a[now/2]);
			now/=2;
		}
		else break;
	}
}

int main(){
	int sp;
	pq<int> q;
	int n,t,s=0,a,b;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		q.push(t);
	}
	for(int i=1;i<n;i++){
		a=q.top();
		q.pop();
		b=q.top();
		q.pop();
		q.push(a+b);
		s+=a+b;
	}
	printf("%d",s);
	return 0;
}
