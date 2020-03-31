#include<queue>
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	priority_queue<double> pq;
	pq.push(3.1);
	pq.push(2.3);
	pq.push(8.2);
	pq.push(6.2);
	cout<<pq.size()<<endl;
	for(int i=0;i<4;i++){
		cout<<pq.top()<<' ';
		pq.pop();
	}
	return 0;
}
