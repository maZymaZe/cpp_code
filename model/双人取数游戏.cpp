#include <cstdio>
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}
int main()
{
	int n, dp[120][120] = {0},a[120]={0},sum[120][120]={0};
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum[1][i]=sum[1][i-1]+a[i];
		dp[i][i]=sum[i][i]=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			sum[i][j]=sum[i][j-1]+a[j];
		}
	}
	for(int i=n;i>=1;i--){
		for(int j=i;j<=n;j++){
			dp[i][j]=sum[i][j]-min(dp[i+1][j],dp[i][j-1]);
		}
	}
	printf("%d %d",dp[1][n],sum[1][n]-dp[1][n]);
	return 0;
}

