#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> deq1;
    int i;
    for(i=1;i<=5;i++){
       deq1.push_back(i);
    }
    cout<<deq1.size()<<endl;
    cout<<endl;
    for (int j = 0; j < 5; j++)
    {
         cout<<deq1[j]<<endl;
    }
    cout<<endl;
    deque<int>::iterator d=deq1.begin();
    while (d!=deq1.end())
    {
       cout<<*d<<endl;
       d++;
    }
    cout<<endl;
    
    d=deq1.begin();
    int c=0;
    while (c!=5)
    {
       cout<<d[c]<<endl;
       c++;
    }
    cout<<endl;
    
    deque<int>::reverse_iterator rd=deq1.rend();//rend point to the first item
	while(rd!=deq1.rbegin()){
		rd--;//maybe all the end()/rend() point to no item
		cout<<(*rd)<<endl;
		
	} 
	cout<<endl;
	
	d=deq1.erase(d);
	
    while (d!=deq1.end())
    {
       cout<<*d<<endl;
       d++;
    }
    cout<<endl;
    
    deq1.push_front(0); 
    d=deq1.begin();
    while (d!=deq1.end())
    {
       cout<<*d<<endl;
       d++;
    }
    cout<<endl;
    deq1.pop_front();
     d=deq1.begin();
    while (d!=deq1.end())
    {
       cout<<*d<<endl;
       d++;
    }
    cout<<endl;
    return 0;
    
}
