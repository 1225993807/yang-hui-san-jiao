#include<stdio.h>
int main()
{
	int a[10][10] = { {1},{1,1} };
	int i, j;
	int m, n;
	scanf("%d", &m);
	for (i = 0; i < m; i++)
		a[i][0] = 1;
	for (i = 2; i < m; i++)
		for (j = 1; j <= i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}