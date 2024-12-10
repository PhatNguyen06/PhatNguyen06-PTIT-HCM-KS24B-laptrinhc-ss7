#include<stdio.h>
#include<math.h>

int ktra_so_ngto(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(ktra_so_ngto(arr[i]))
		{
			printf("%d ", arr[i]);
		}
	}
	
	
	return 0;
}
