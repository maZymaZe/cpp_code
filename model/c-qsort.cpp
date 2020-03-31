#include <stdio.h>     
#include <stdlib.h>
int a[100000]={0};
int compare(const void *a, const void *b)
{
	return( *(int*)a - *(int*)b );
}
int main ()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	qsort (a, n, sizeof(int), compare);
	for(int i=0; i<n; i++)
	printf ("%d ",a[i]);
	return 0;
}
