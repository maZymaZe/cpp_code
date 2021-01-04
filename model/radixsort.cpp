#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int BIT=16,U=65536;
long long n,a[100006],b[100006],bin[U];
inline int gd(int x,int d){return (x>>(d*BIT))&(U-1);}
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int d=0;d<2; d++){
        memset(bin, 0, sizeof(bin));
        for(int i=1;i<=n;i++)++bin[gd(a[i],d)];
        for(int i=1;i<U;i++)bin[i]+=bin[i-1];
        for(int i=n;i>0;i--)b[bin[gd(a[i],d)]--]=a[i];
        swap(a,b);
    }
    for(int i=1;i<=n;i++)printf("%lld ",a[i]);
    return 0;
}