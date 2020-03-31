#include<iostream>
#include<list>
using namespace std;
bool t(const int &T){
	if (T==4)return 1;
	else return 0;
}
int main(){
    list<int> l1;
    int i;
    for(i=1;i<=5;i++){
       l1.push_back(5-i);
    }
    list<int> l2;
   
    for(i=1;i<=5;i++){
       l2.push_back(10-i);
    }
    l2.push_back(3);
    l2.sort();
    cout<<l1.size()<<endl;
    cout<<endl;
  /*  for (int j = 0; j < 5; j++)
    {
         cout<<l1[j]<<endl;           ÎÞÏÂ±ê 
    }
    cout<<endl;*/
    list<int>::iterator l=l1.begin();
    while (l!=l1.end())
    {
       cout<<*l<<endl;
       l++;
    }
    cout<<endl;
    
    l=l1.begin();
    int c=0;
 /*   while (c!=5)
    {
       cout<<l[c]<<endl;
       c++;
    }
    cout<<endl;
    */
    list<int>::reverse_iterator rl=l1.rend();//rend point to the first item
	while(rl!=l1.rbegin()){
		rl--;//maybe all the end()/rend() point to no item
		cout<<(*rl)<<endl;
		
	} 
	cout<<endl;
	
	l1.remove(3);
	l=l1.begin();
    while (l!=l1.end())
    {
       cout<<*l<<endl;
       l++;
    }
    cout<<endl;
  /*  l=l1.remove_if(l1.begin(),l1.end(),t);*/
	l1.sort();
	l=l1.begin();
    while (l!=l1.end())
    {
       cout<<*l<<endl;
       l++;
    }
    cout<<endl;
    l=l2.begin();
    while (l!=l2.end())
    {
       cout<<*l<<endl;
       l++;
    }
    cout<<endl;
    l1.merge(l2);
    l=l1.begin();
    while (l!=l1.end())
    {
       cout<<*l<<endl;
       l++;
    }
    cout<<endl;
    
    
    return 0;
    
}
