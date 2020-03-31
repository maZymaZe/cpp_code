#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
char name[40],host[40]="maze";
int main(){
	int match=1;
	printf("what is your name?\n");
	cin>>name;
	for(int i=0;i<=39;i++)
		if(name[i]!=host[i]) match=0;
	if(match)printf("hello,maze.");
	else printf("sorry,i do not know you.");
	return 0;
}
