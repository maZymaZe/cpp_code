#include <cstdio>
void divide(int i)
{
	int ans[104] = {0}, rest[104] = {0}, count[104] = {0};
	int j = 0, k;
	rest[0] = 1;
	while (1)
	{
		rest[j + 1] = rest[j] * 10 % i;
		count[rest[j + 1]]++;
		ans[j+1] = rest[j] * 10 / i;
		j++;
		if (count[rest[j]] > 3&&j>=1)
		{
			for (k = j - 1; k >= 0; k--)
			{
				if (rest[k] == rest[j])
					break;
			}
			for (int m = k; m <= j-1; m++)
			{
				printf("%d", ans[m]);
			}
			break; 
		}
		
	}
}
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if(i==1||i==2||i==4||i==5||i==8||i==10||i==16||i==20||i==25||i==32||i==40||i==50||i==64||i==80||i==100)continue;
		printf("%d :",i);
		divide(i);
		printf("\n");
	}
	return 0;
}
