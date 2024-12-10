#include<stdio.h>

int main()
{
	int n, m;
	printf("Nhap so hang: ");
	scanf("%d", &n);
	printf("Nhap so cot: ");
	scanf("%d", &m);
	
	int arr[n][m];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d\n", &arr[i][j]);
		}
	}
	
	for(int j = 0; j <= m - 1; j++)
	{
		printf("%d ", arr[0][j]);
	}
	
	for(int i = 1; i <= n - 2; i++)
	{
		printf("%d ", arr[i][m - 1]);
	}
	
	for(int j = m - 1; j >= 0; j--)
	{
		printf("%d ", arr[n-1][j]);
	}
	
	for(int i = n - 2; i > 0; i--)
	{
		printf("%d ", arr[i][0]);
	}
	
	
	return 0;
}
