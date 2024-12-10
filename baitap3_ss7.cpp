#include<stdio.h>

int main()
{
	int arr[5];
	
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int dem = 0;
	for(int i = 0; i < 5; i++)
	{
		if(arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
			dem++;
		}
	}
	
	if(dem == 0)
	{
		printf("Mang khong chua so chan\n");
	}
	
	return 0;
}
