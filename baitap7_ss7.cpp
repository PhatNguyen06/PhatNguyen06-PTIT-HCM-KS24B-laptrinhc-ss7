#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		while(arr[i] % 2 == 0)
		{
			printf("Yeu cau nhap so le: ");
			scanf("%d", &arr[i]);
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
