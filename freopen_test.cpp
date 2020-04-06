#include<cstdio>
int main(){
    int n=10,a;
    while(n--){
        freopen("1.txt","r",stdin);
        scanf("%d",&a);
        printf("%d:%d\n",n,a);
    }
    return 0;
}