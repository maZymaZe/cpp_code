#include<cstdio>
#include<algorithm>
using namespace std;
int f[103][103],n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&f[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                f[j][k]=min(f[j][k],f[j][i]+f[i][k]);
            }
        }
    }
    //output
    return 0;
}