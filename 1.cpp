#include<bits/stdc++.h>
using namespace std;

int mt[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int sl[7]={0};

int main(){
    int n;
    cin>>n;
    int day=-1;
    int cnt=0;
    for(int i=1900;i<=1900+n-1;++i){
        bool rn=0;
        if(i%100==0){
            if(i%400==0){
                rn=1;
            }
        }
        else{
            if(i%4==0){
                rn=1;
            }
        }
        if(rn)mt[2]=29;
        else mt[2]=28;
        for(int j=1;j<=12;++j){
            for(int k=1;k<=mt[j];++k){
                ++day;
                day%=7;
//              cout<<i<<' '<<j<<' '<<k<<' '<<day<<endl;
                if(k==13)++sl[day];
                ++cnt;
            }
        }
    }
    
    for(int i=5;i<7;++i){
        cout<<sl[i]<<' ';
    }
    for(int i=0;i<5;++i){
        cout<<sl[i]<<' ';       
    }
    cout<<endl;
    return 0;
}
