#include<stdio.h>

int main()
{
	int n;
	printf("Nhap do dai cua mang: ");
	scanf("%d", &n);
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
