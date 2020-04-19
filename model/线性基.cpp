#include <cstdio>
#include <cstring>
#define ll long long
struct Lbase {
    ll d[61];
    Lbase() { memset(d, 0, sizeof(d)); }
    bool insert(ll x) {
        for (int i = 60; i >= 0; i--) {
            if (x & ((ll)1 << i)) {
                if (d[i])
                    x ^= d[i];
                else {
                    d[i] = x;
                    break;
                }
            }
        }
        return x > 0;
    }
    ll qmax(){
        ll x=0;
        for (int i=60;i>=0;i--){
            if(d[i]&&(x^d[i])>x)x^=d[i];
        }
        return x;
    }
    void merge(const Lbase&a){
        for(int i=60;i>=0;i--){
            if(a.d[i])insert(a.d[i]);
        }
    }
};
int main(){
    Lbase lb;
    int n;
    ll t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&t);
        lb.insert(t);
    }
    printf("%lld",lb.qmax());
    return 0;
}
////////////////////////////////////////////////////////////////
/*
void insert(int x){ 
    for (int i = 60; i >= 0; i--) {
            if (x & ((ll)1 << i)) {
                if (d[i])
                    x ^= d[i];
                else {
                   ++cnt;
                   d[i]=x;
                   for(int j=i-1; j>=0;j--){
                       if(d[j]&&(d[i]>>j)&1)d[i]^=b[j];
                   }
                   for(int j=60;j>i;j--){
                       if((d[j]>>1)&1)d[j]^=d[i];
                   }
                   break;
                }
            }
        }
        return x > 0;
}
ll getk(int k){
    ll res=0;
    for(int i=0;i<v.size();i++){
        if((k>>1)&1)res^=d[i];
    }
    return res;
}