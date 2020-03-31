#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1;
    int i;
    for(i=1;i<=5;i++){
       vec1.push_back(i);
    }
    cout<<vec1.size()<<endl;
    cout<<endl;
    for (int j = 0; j < 5; j++)
    {
         cout<<vec1[j]<<endl;
    }
    cout<<endl;
    vector<int>::iterator v=vec1.begin();
    while (v!=vec1.end())
    {
       cout<<*v<<endl;
       v++;
    }
    cout<<endl;
    
    v=vec1.begin();
    int c=0;
    while (c!=5)
    {
       cout<<v[c]<<endl;
       c++;
    }
    cout<<endl;
    
    vector<int>::reverse_iterator rv=vec1.rend();//rend point to the first item
	while(rv!=vec1.rbegin()){
		rv--;//maybe all the end()/rend() point to no item
		cout<<(*rv)<<endl;
		
	} 
	cout<<endl;
	
	v=vec1.erase(v);
	
    while (v!=vec1.end())
    {
       cout<<*v<<endl;
       v++;
    }
    cout<<endl;
    return 0;
    
}
