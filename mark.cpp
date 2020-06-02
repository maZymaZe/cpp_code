#include<string>
#include<iostream>
#include<map>
using namespace std;
struct stu{
    string id;
    string d;
    int tru;
}s[200];
int main(){
    map<string,int> markmap;
    freopen("data.txt","r",stdin);
    //freopen("mark.txt","w",stdout);
    freopen("rawmark.txt","w",stdout);
    for(int i=1;i<=104;i++){
        cin>>s[i].d;
    }
    for(int i=1;i<=104;i++){
        cin>>s[i].id;
    }
    string t1;
    int t2;
    cin>>t1>>t2;
    while(t2!=0){
        markmap.insert({t1,t2});
        cin>>t1>>t2;
    }
    for(int i=1;i<=104;i++){
        if(markmap.count(s[i].d))
        s[i].tru=markmap[s[i].d];
        else s[i].tru=0;
    }
    for(int i=1;i<=104;i++){
        cout<<s[i].tru<<endl;
        //cout<<i<<"  "<<s[i].id<<"     "<<s[i].tru<<endl;
    }
    return 0;
}
